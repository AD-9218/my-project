#include <iostream>
using namespace std;

class Account{
protected:
    int accountNo;
    int balance;

public:
    Account(int ac,int b){
        accountNo=ac;
        balance=b;
    }

    virtual void deposit(int amount){
        balance += amount;
    }

    virtual void display(){
        cout<<"Account No: "<<accountNo<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

    virtual ~Account(){
        cout<<"Account destroyed"<<endl;
    }
};

class Saving: public Account{
    int rate;

public:
    Saving(int ac,int b,int r):Account(ac,b){
        rate = r;
    }

    void addInterest(){
        balance += (balance * rate)/100;
    }
};

class Current: public Account{
    int overdraftLimit;

public:
    Current(int ac,int b,int limit):Account(ac,b){
        overdraftLimit = limit;
    }

    void withdraw(int amount){
        if(balance + overdraftLimit >= amount){
            balance -= amount;
        } else {
            cout<<"Limit exceeded!"<<endl;
        }
    }
};

int main(){
    Current ca(1234,30000,10000);

    ca.withdraw(35000);
    ca.display();

    return 0;
}