#include <iostream>
using namespace std;

class Student{
    protected:
    int student_roll;
    string name;

    public:
    Student(int roll,string Name){
        student_roll = roll;
        name = Name;
    }
    void display(){
        cout<<"Student Roll no. is : "<<student_roll<<endl;
        cout<<"Student name is : "<<name<<endl;
    }
};

class Marks:public Student{
    protected:
    double m1,m2,m3;
    double total;
    double cal_total;
    double percentage;

    public:
    Marks(int roll,string Name,double Total):Student(roll,Name){
        student_roll = roll;
        name = Name;
        total = Total;
        
    }
    void enter_Marks(){

        cout<<"Enter marks According subjects : ";
        cin>>m1>>m2>>m3;
            cal_total = (m1+m2+m3);
            percentage = (cal_total*100.0)/90.00;
    }
    void display_result(){
        cout<<"Total Marks : "<<cal_total<<endl;
        cout<<"Percentage : "<<percentage<<endl;
    }
};

class Result:public Marks{
    public:
    
    Result(int roll,string Name,float Total):Marks(roll,Name,Total){
        student_roll = roll;
        name = Name;
        total = Total;
        
    }


    char grade;
    void show_grade(){
        if(percentage>=90 && percentage<=100){
            grade = 'A';
        }
        else if(percentage>=80 && percentage<90){
            grade = 'B';
        }
        else if(percentage>=70 && percentage<80){
            grade = 'C';
        }
        else if(percentage>=60 && percentage<70){
            grade = 'D';
        }
        else if(percentage>=50 && percentage<60){
            grade = 'E';
        }
        else{
            grade = 'f';
        }

        cout<<"Student Grade is a : "<<grade<<endl;
    }
};

int main()
{
    Student s(101,"aaaa");
    s.display();

    Marks m(101,"aaaa",90.00);
    m.enter_Marks();
    
    Result r(101,"aaaa",90.0);
    m.display_result();
    r.show_grade();


    return 0;
}