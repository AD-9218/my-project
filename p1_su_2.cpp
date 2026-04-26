#include <iostream>
using namespace std;

class wallet{
    int walletID;
    string username;
    double balance;
    double cashback;

    public:
    // int casebacka;
    wallet(int id,string n,double b,double cb){
        walletID=id;
        username=n;
        balance=b;
        cashback=cb;
    }

    void loadmoney(double amount){
        cashback=(amount*cashback)/100;
        balance=balance+amount+cashback;
        cout<<"Money success full Loaded"<<endl;
    }

    void trancefarmoney(wallet &re,double amount){
        if(amount<=balance){
            balance=balance-amount;
            re.balance=re.balance+amount;
            cout<<"Transfer Succesfull"<<endl;
        }
        else{
            cout<<"Error"<<endl;
        }
    }

    void display(){
        cout<<"walletID :"<<walletID<<endl;
        cout<<"username :"<<username<<endl;
        cout<<"balance  :"<<balance<<endl;
    }

    // void show(){
    //     cout<<"Transaction for :"<<username<<endl;
    //     for(int i=0;i<Transaction.size();i++){
    //         cout<<i+1<<"."<<Transaction[i]<<endl;
    //     }
    // }
};

int main()
{
    wallet w1(1,"abc",5000,10);
    wallet w2(2,"xyz",3000,10);
    w1.display();
    w1.loadmoney(200);
    w1.trancefarmoney(w2,400);
    w1.display();
    w2.display();

    return 0;
}