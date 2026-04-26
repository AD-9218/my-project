#include <iostream>
using namespace std;

class wallet{
    int walletID;
    string username;
    double balance;

    public:
    // int count=0;
    wallet(int id,string n,double b){
        walletID=id;
        username=n;
        balance=b;
    }

    void loadmoney(double amount){
        balance=balance+amount;
        cout<<"Money success full Loaded"<<endl;
    }

    void trancefarmoney(wallet &re,double amount){
        if(amount<=balance){
            balance=balance-amount;
            re.balance=re.balance+amount;
            cout<<"Trancefar Succesfull"<<endl;
        }
        else{
            cout<<"Error"<<endl;
        }
        // count++;
    }

    void display(){
        cout<<"-------------------------------"<<endl;
        cout<<"walletID :"<<walletID<<endl;
        cout<<"username :"<<username<<endl;
        cout<<"balance  :"<<balance<<endl;
        // if(count>5){
        //     cout<<"not Transactions"<<endl;
        // }
        cout<<"-------------------------------"<<endl;
    }
};

int main()
{
    wallet w1(1,"abc",500);
    wallet w2(2,"xyz",300);
    w1.display();
    w2.display();
    w1.loadmoney(200);
    w1.trancefarmoney(w2,400);
    w1.display();
    w2.display();

    return 0;
}