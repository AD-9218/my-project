#include<iostream>
#include<queue>
using namespace std;
class Fahrenheit;
class Celsius{
private:
    float temp;
public:
    Celsius(float t = 0) {
        temp = t;
    }
    float getTemp() {
        return temp;
    }
    operator Fahrenheit();

    bool operator==(Celsius c) {
        return temp == c.temp;
    }
};
class Fahrenheit {
private:
    float temp;
public:
    Fahrenheit(float t = 0) {
        temp = t;
    }
    float getTemp() {
        return temp;
    }
    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9); // F → C
    }
    bool operator==(Fahrenheit f) {
        return temp == f.temp;
    }
};
Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}
int main() {
    Celsius c1(30);
    Celsius c3(70);
    if (c1==c3){
        cout<<"Temp are equal"<<endl;
    }
    else {
        cout<<"Temp not equal"<<endl;
    }
    queue<Celsius> q;
    q.push(Celsius (5));
    q.push(Celsius (10));
    q.push(Celsius (15));
    q.push(Celsius (20));
    while(!q.empty())
    {
        Celsius temp=q.front();
        q.pop();
        Fahrenheit f =temp;
        cout<<temp.getTemp()<<"C"<<"->"<<f.getTemp()<<"F"<<endl;
    }
    Celsius arr[5]={Celsius(30),Celsius(35),Celsius(40),Celsius(45),Celsius(50)};
    Fahrenheit f1;
    f1 = c1;
    cout << "Celsius: " << c1.getTemp()
         << "  Fahrenheit: " << f1.getTemp() << endl;
    return 0;
}
 