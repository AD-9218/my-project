#include <iostream>
using namespace std;

class student{
    string name;
    public:
    int* cgpaptr;
    student(string n,int cgpaptr=8){
        name=n;
        // cgpaptr=8;
        // cgpaptr=new int;
    }

    void getinfo(){
        cout<<name<<endl<<cgpaptr<<endl;
    }
};

int main()
{
    student s1("AAAAA");
    s1.getinfo();
    student s2("aaaa9",9.8);
    s2.getinfo();
    return 0;
}