#include <iostream>
using namespace std;

class Salary{
    string name;
    int b_salary;
    int amount;
    public:
    // static int bonus;
    Salary(){

    }
    Salary(string n,int bs,int a){
        name=n;
        b_salary=bs;
        amount=a;
    }
    inline int totalSalary(int bsalary,int bonus){
        return bsalary+bonus;
    }
    void display(){
        cout<<"NAME        :"<<name<<endl;
    }
    // void update(){
    //     if(b_salary<0){
    //         cout<<"Negative salary is invalid !"<<endl;
    //     }
    //     else{
    //         cout<<"Salary is a perfect "<<endl;
    //     }
    //     if(b_salary>4500000){
    //         cout<<"Very nice salary"<<endl;
    //     }
    // }
    // int Bonus(){
    //     if(b_salary>0 && b_salary<=500000){cout<<"No Bonus"<<endl;}
    //     else if(b_salary>500000 && b_salary<=1200000){
    //         bonus=5000;
    //         return 0;
    //     }
    //     else{
    //         bonus=10000;
    //         return 0;
    //     }
    // }
};

// int Salary::bonus;

int main()
{
    int i;
    Salary *s = new Salary[3];   

    s[0] = Salary("a", 4800000, 5000);
    s[1] = Salary("b", 4000000, 5000);
    s[2] = Salary("c", 4800000, 5000);
    
    for(i=0;i<3;i++)
    {
    // s.Bonus();
    // s.update();
    s[i].display();
    cout<<"Total Salary:"<<s[i].totalSalary(4800000,/*Salary::bonus*/4000)<<endl;
    }

    delete[] s;
    return 0;
}