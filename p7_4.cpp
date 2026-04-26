#include <iostream>
using namespace std;

class shape{
    public:
    virtual void area(){};
};

class circle:public shape{
    public:
    int radius;
    void area(){
        cout<<"Area of Circle is a pie*(r*r) \n";
        cout<<"enter radius : ";
        cin>>radius;
        cout<<"Area of Circle is a : "<<(3.14*radius*radius)<<endl;
    }
};

class rectangle:public shape{
    public:
    int lenght;
    int width;
    void area(){
        cout<<"Area of Rectangle is a length*width \n";
        cout<<"enter width and lenght : ";
        cin>>width;
        cin>>lenght;
        cout<<"Area of Rectangle is a : "<<(lenght*width)<<endl;
    }
};

int main()
{
    shape *s[2];
    
    circle c;
    s[0]=&c;
    s[0]->area();

    rectangle r;
    s[1]=&r;
    s[1]->area();
    
    // delete[] s;
    return 0;
}