#include <iostream>
using namespace std;

class shape{
    protected:
    int radius;
    public:
    virtual void area(){};
};

class circle:public shape{
    public:
    void area(){
        cout<<"-------------------------------------------------\n";
        cout<<"Area of Circle is a pie*(r*r) \n";
        cout<<"enter radius : ";
        cin>>radius;
        cout<<"Area of Circle is a : "<<(3.14*radius*radius)<<endl;
    }
};

int main()
{
    shape *s;
    
    circle *c = new circle[4];
    for(int i=0;i<5;i++){
        s=&c[i];
        s->area();
    }

    return 0;
}