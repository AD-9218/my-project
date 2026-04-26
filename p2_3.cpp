#include <iostream>
using namespace std;

class Bank{
    string name;
    int ID;
    int balance;
    public:
    int deposit;
    int withdraw;
    Bank(){
        balance=0;
    }
    Bank(string n,int id,int b){
        name=n;
        ID=id;
        balance=b;
    }

    void set(){
        cin>>deposit;
        cin>>withdraw;
    }

    void Depositing(){
        balance = balance + deposit;
        balance = balance - withdraw;
    }
    void display(){
        cout<<"Balance:"<<balance;
    }
};

int main()
{
    Bank b1("ABC",101,2000);
    b1.set();
    b1.Depositing();
    b1.display();
    Bank b2("ABC",101,2000);
    b2.set();
    b2.Depositing();
    b2.display();
    return 0;
}