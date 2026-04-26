#include <iostream>
using namespace std;

class animal{
    public:
    void sound(){
        cout<<"Animal sound";
    }
};

class dog:public animal{
    public:
    void sound(){
        cout<<"Dog barks";
    }
};

int main()
{
    dog d;
    d.sound();
    
    return 0;
}