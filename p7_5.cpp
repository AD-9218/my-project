#include <iostream>
using namespace std;

class Student{
    protected:
    float marks;
    char Grade;
    public:
    virtual void grade()=0;
    void setMarks(float m){
    marks = m;
}
};

class Undergraduate:public Student{
    public:
    void grade(){
        // cin>>marks;
        if(marks>=90 && marks<=100){
            Grade='A';
            cout<<"For Undergraduate Student GRADE : "<<Grade<<endl;
        }
        else if(marks<90 && marks>=80){
            Grade='B';
            cout<<"For Undergraduate Student GRADE : "<<Grade<<endl;
        }
        else if(marks<80 && marks>=70){
            Grade='C';
            cout<<"For Undergraduate Student GRADE : "<<Grade<<endl;
        }
        else if(marks<70 && marks>=60){
            Grade='D';
            cout<<"For Undergraduate Student GRADE : "<<Grade<<endl;
        }
        else if(marks<60 && marks>=50){
            Grade='E';
            cout<<"For Undergraduate Student GRADE : "<<Grade<<endl;
        }
        else if(marks<50 && marks>=40){
            Grade='F';
            cout<<"For Undergraduate Student GRADE : "<<Grade<<endl;
        }
        else {
            cout<<"failed.."<<endl;
        }
    }
};

class Postgraduate:public Student{
    public:
    // cin>>marks;
    void grade(){
        if(marks>=90 && marks<=100){
            // Grade='A'+'';
            cout<<"For Postgraduate Student GRADE : A+"<<Grade<<endl;
        }
        else if(marks<90 && marks>=80){
            Grade='A';
            cout<<"For Postgraduate Student GRADE : "<<Grade<<endl;
        }
        else if(marks<80 && marks>=70){
            
            cout<<"For Postgraduate Student GRADE : B+"<<endl;
        }
        else if(marks<70 && marks>=60){
            Grade='B';
            cout<<"For Postgraduate Student GRADE : "<<Grade<<endl;
        }
        else {
            cout<<"For Postgraduate Student GRADE : C"<<endl;
        }
    }
};

int main()
{
    Student *s;
    Undergraduate u;
    Postgraduate p;

    s=&u;
    int mark_us;
    cin>>mark_us;
    u.setMarks(mark_us);
    s->grade();

    s=&p;
    int mark_ps;
    cin>>mark_ps;
    p.setMarks(mark_ps);
    s->grade();

    return 0;
}