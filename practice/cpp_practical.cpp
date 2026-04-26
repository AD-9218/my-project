#include<iostream>
using namespace std;

class Student{
    protected:
    string name;
    int Entrollment_Number;

    public:
    Student(string Name,int E_num){
        name=Name;
        Entrollment_Number=E_num;
    }
    virtual void calculateFees(){
        cout<<"Fees of Diffent type of student"<<endl;
    }
};

class Regular:public Student{
    public:
    int fees;
    Regular(string Name,int E_num):Student(Name,E_num){
        name=Name;
        Entrollment_Number=E_num;
    }
    void calculateFees(){
        fees=50000;
        cout<<"Fees For Regular Student : "<<fees<<endl;
    } 
};

class  Scholarship:public Student{
    public:
    int fees;
    Scholarship(string Name,int E_num):Student(Name,E_num){
        name=Name;
        Entrollment_Number=E_num;
    }
    void calculateFees(){
        fees=50000-(20*50000/100);
        cout<<"Fees For Scholarship Student : "<<fees<<endl;
    } 
};

class Hostel:public Student{
    public:
    int fees;
    Hostel(string Name,int E_num):Student(Name,E_num){
        name=Name;
        Entrollment_Number=E_num;
    }
    void calculateFees(){
        fees=50000+30000;
        cout<<"Fees For Hostel Student : "<<fees<<endl;
    } 
};

int main(){
    Student* s1;

    Regular r("aaa",21);
    Scholarship sc("bbb",22);
    Hostel h("ccc",23);

    s1 = &r;
    s1->calculateFees();

    s1 = &sc;
    s1->calculateFees();

    s1 = &h;
    s1->calculateFees();

    return 0;
}