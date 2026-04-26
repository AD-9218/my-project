#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void details()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
    }
};

class student : public person
{
public:
    int roll_no;
    int *marks = new int[3];

    void enter_marks()
    {
        cout<<"Enter the Marks : ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "name : " << name << endl;
        cout << "Age : " << age << endl;
        cout<<" marks[0] : "<<marks[0]<<endl;
        cout<<" marks[1] : "<<marks[1]<<endl;
        cout<<" marks[2] : "<<marks[2]<<endl;

    }
    ~student(){
        delete[] marks;
    }
};

int main()
{
    person p;
    student s;

    s.details();
    s.enter_marks();
    s.display();

}