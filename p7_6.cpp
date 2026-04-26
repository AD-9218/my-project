#include <iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base class Contructor is called !"<<endl;
    }
    virtual ~Base(){
        cout<<"Base class Distructor is called !"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived class Contructor is called !"<<endl;
    }
    ~Derived(){
        cout<<"Derived class Distructor is called !"<<endl;
    }
};

int main()
{
    Base b;
    Derived d;

    return 0;
}