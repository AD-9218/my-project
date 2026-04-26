#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void Pshow(){
        cout<<"person name : "<<this->name<<endl;
        cout<<"person  age : "<<this->age<<endl;
    }
};

class Employee:public Person{
    protected:
    int Employee_ID;
    public:
    Employee(string name,int age,int id):Person(name,age){
        this->name=name;
        this->age=age;
        Employee_ID=id;
    }
    void Eshow(){
        Pshow();
        cout<<"Employee ID : "<<Employee_ID<<endl;
    }
};

class Manager:public Employee{
    protected:
    string department;
    public:
    Manager(string name,int age,int id,string dep):Employee(name,age,id){
        this->name=name;
        this->age=age;
        Employee_ID=id;
        department=dep;
    }
    void Mshow(){
        Eshow();
        cout<<"Department of Manager : "<<department<<endl;
    }
};

int main()
{
    // Person p;
    // Employee e;
    Manager m("Anandi",4,201,"C.E.");
    m.Mshow();
    return 0;
}