#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() {} // Virtual function makes Base polymorphic
};
class Derived : public Base
{
};

int main()
{

    Base *basePtr = new Derived();
    Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);
    // Safe downcasting
    if (derivedPtr)
    {
        cout << "Successfully casted to Derived!" << endl;
    }
    else
    {
        cout << "Failed to cast!" << endl;
    }
    delete basePtr;
    return 0;
}