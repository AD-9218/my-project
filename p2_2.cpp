#include <iostream>
using namespace std;

class student{
    int roll;
    string name;
    int marks[3];
    public:
    int ave;
    student(){

    }
    student(int r,string n){
        roll=r;
        name=n;
    }

    void setmarks(){
        int i;
        for(i=0;i<3;i++){
            cin>>marks[i];
            // if(marks[i]<0 || marks[i]>100){
            //     cout<<"not valid marks."<<endl;
            // }
        }
    }
    int Average(){
        ave=(marks[0]+marks[1]+marks[2])/3;
        return 0;
    }
    int display(){
        cout<<"---------------------------------"<<endl;
        cout<<"Roll No.      :-  "<<roll<<endl;
        cout<<"Name          :-  "<<name<<endl;
        cout<<"Average Marks :-  "<<ave<<endl;
        cout<<"---------------------------------"<<endl;
        // if(ave>90)cout<<"A GRADE."<<endl;
        // else cout<<"Other GRADE."<<endl;
        return 0;
    }
    
};

int main()
{
    student s1(1,"XYZ");
    student s2(2,"ABC");
    s1.setmarks();
    s1.Average();
    s1.display();
    s2.setmarks();
    s2.Average();
    s2.display();

    // if(s1.Average()>s2.Average()){
    //     cout<<"Highest Average value is student 1."<<endl;
    // }
    // else{
    //     cout<<"Highest Average value is student 2."<<endl;
    // }
    return 0;
}