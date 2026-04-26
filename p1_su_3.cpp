#include <iostream>
using namespace std;

class wallet{
    int walletID;
    string username;
    double balance;
    bool isFreeze;
    double cashback;
    public:
    wallet(int id,string n,double b){
        walletID=id;
        username=n;
        balance=b;
        isFreeze=false;
        // cashback=cb;
    }

    void loadmoney(double amount){
        balance=balance+amount+cashback;
        cout<<"Money success full Loaded"<<endl;
        // balance=(amount*cashback)/100;
        if(isFreeze){
        cout<<"Wallet is not active"<<endl;
        return;
        }
    }
    
    void freezenwallet(){
        isFreeze=true;
        cout<<"Wallet is not active\n";
    }
    
    void unfreezenwallet(){
        isFreeze=false;
        cout<<"Wallet is active\n";
    }
    
    void trancefarmoney(wallet &re,double amount){
        if(isFreeze){
        cout<<"Wallet is frozen"<<endl;
        return;
        }
        if(re.isFreeze){
        cout<<"not active"<<endl;
        return;
        }
        
        if(amount<balance){
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
        cout<<"wallet is"<<(isFreeze?"not active":"Active")<<endl;
    }
};

int main()
{
    wallet w1(1,"abc",500);
    wallet w2(2,"xyz",300);
    w1.loadmoney(600);
    w1.freezenwallet();
    w1.trancefarmoney(w2,100);
    w1.display();
    w2.display();
    w1.unfreezenwallet();
    w1.trancefarmoney(w2,100);
    w1.display();
    w2.display();

    return 0;
}