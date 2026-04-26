#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id;

public:
    int salary = 100000;

    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    virtual void Salary()
    {
        cout << "\nName: " << name << " | ID: " << id;
        cout << "\nBasic Employee Salary: " << salary << endl;
    }
};

class Bonus : public Employee
{
public:
    int bonus;

    Bonus(string n, int i, int b) : Employee(n, i)
    {
        bonus = b;
    }

    void Salary()
    {
        int newSalary = salary + bonus;
        cout << "\nName: " << name << " | ID: " << id;
        cout << "\nBonus Employee Salary: " << newSalary << endl;
    }
};

class Allowance : public Employee
{
public:
    int allowance;

    Allowance(string n, int i, int a) : Employee(n, i)
    {
        allowance = a;
    }

    void Salary()
    {
        int newSalary = salary + allowance;
        cout << "\nName: " << name << " | ID: " << id;
        cout << "\nAllowance Employee Salary: " << newSalary << endl;
    }
};

class Both : public Employee
{
public:
    int bonus, allowance;

    Both(string n, int i, int b, int a) : Employee(n, i)
    {
        bonus = b;
        allowance = a;
    }

    void Salary()
    {
        int newSalary = salary + bonus + allowance;
        cout << "\nName: " << name << " | ID: " << id;
        cout << "\nEmployee with Bonus & Allowance Salary: " << newSalary << endl;
    }
};

int main()
{

    Employee e("Amit", 101);
    Bonus b("Rahul", 102, 5000);
    Allowance a("Priya", 103, 3000);
    Both ba("Neha", 104, 4000, 2000);

    e.Salary();
    b.Salary();
    a.Salary();
    ba.Salary();

    return 0;
}