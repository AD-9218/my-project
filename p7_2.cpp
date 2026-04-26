#include <iostream>
using namespace std;

class Complex{
    public:
    int real,image;
    Complex(int A,int B){
        real=A;
        image=B;
    }
    void display(){
    cout<<real<<"+"<<image<<"i"<<endl;
    }
    Complex operator+(Complex &obj){
        Complex temp(0,0);
        temp.real = real + obj.real;
        temp.image = image + obj.image;
        return temp;
    }
    Complex operator-(Complex &obj){
        Complex temp(0,0);
        temp.real = real - obj.real;
        temp.image = image - obj.image;
        return temp;
    }
};

int main()
{
    Complex c1(3,2);
    Complex c2(1,7);
    Complex c3=c1+c2;
    Complex c4=c2-c1;
    c4.display();
    c3.display();

    return 0;
}