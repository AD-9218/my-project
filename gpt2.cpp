#include <iostream>
#include <fstream>
using namespace std;

class Employee
{
public:
    string name;
    int id;

    Employee(string Name, int Id)
    {
        name = Name;
        id = Id;
    }
};

class Manager : public Employee
{
public:
    int salary;
    string department;

    Manager(string Name, int Id, int Sal, string dep) : Employee(Name, Id)
    {
        salary = Sal;
        department = dep;
    }

    void display()
    {
        // Display on screen
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "Department : " << department << endl;
        cout << "----------------------" << endl;

        // Write to file (Append mode)
        ofstream out("Employee.txt", ios::app);

        out << "Name : " << name << endl;
        out << "Id : " << id << endl;
        out << "Salary : " << salary << endl;
        out << "Department : " << department << endl;
        out << "----------------------" << endl;

        out.close();
    }
};

// Function to read file
void readFile()
{
    ifstream in("Employee.txt");
    string line;

    cout << "\nData from file:\n";
    while (getline(in, line))
    {
        cout << line << endl;
    }

    in.close();
}

int main()
{
    Manager m1("Anandi", 101, 4800000, "C.E.");
    Manager m2("Princy", 102, 4500000, "C.S.E.");

    m1.display();
    m2.display();

    readFile();

    return 0;
}