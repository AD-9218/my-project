#include <iostream>
using namespace std;

class Fuel{
    protected:
    string type;
    public:
    Fuel(string t){
        type=t;
    }
};

class Brand:public Fuel{
    protected:
    string brand;
    string name;
    public:
    Brand(string br,string Name,string t):Fuel(t){
        brand=br;
        name=Name;
    }
};

class Car:public Brand{
    public:
    Car(string br,string Name,string t): Brand(br,Name,t){

    }
    void display(){
        cout<<endl<<brand<<endl;
        cout<<name<<endl;
        cout<<type<<endl;
    }
};

int main()
{
    Car c("Toyata","Fortuner","Diesel");
    c.display();
    return 0;
}