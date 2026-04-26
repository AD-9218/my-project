#include <iostream>
#include <fstream>
using namespace std;

class Student
{
protected:
    string name;
    int number;

public:
    void input_student_details()
    {
        cout << "Enter student name and number : ";
        cin >> name >> number;
    }

    void Display_student_details()
    {
        cout << "Student name: " << name << endl;
        cout << "Enrollment number: " << number << endl;
    }

    virtual void calculateResult(ofstream &out)
    {
        cout << "Base class function" << endl;
    }
};

class Internal : public Student
{
public:
    int marks;

    void calculateResult(ofstream &out)
    {
        input_student_details();
        cout << "Enter Internal Marks: ";
        cin >> marks;

        string result = (marks >= 20) ? "Pass" : "Fail";

        cout << result << " in Internal Exam" << endl;

        out << "Internal Student: " << name << " "
            << number << " " << result << endl;
    }
};

class External : public Student
{
public:
    int marks;

    void calculateResult(ofstream &out)
    {
        input_student_details();
        cout << "Enter External Marks: ";
        cin >> marks;

        string result = (marks >= 40) ? "Pass" : "Fail";

        cout << result << " in External Exam" << endl;

        out << "External Student: " << name << " "
            << number << " " << result << endl;
    }
};

int main()
{
    ofstream out("student.txt");

    Student *s;

    Internal is;
    External es;

    s = &is;
    s->calculateResult(out);

    s = &es;
    s->calculateResult(out);

    out.close();

    return 0;
}