#include <iostream>
using namespace std;

class Employee{
    public:
    void virtual salary(){
        cout<<"Employee salary from time"<<endl;
    }
};

class Fulltime:public Employee{
    void virtual salary(){
        cout<<"FULL TIME JOB Salary : 50000"<<endl;
    }
};

class Parttime:public Employee{
    void virtual salary(){
        cout<<"PART TIME JOB Salary : 20000"<<endl;
    }
};


int main()
{
    Employee* e;
    Parttime pt;
    Fulltime ft;

    e=&pt;
    e->salary();

    e=&ft;
    e->salary();

    return 0;
}