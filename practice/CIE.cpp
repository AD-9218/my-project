#include <iostream>
using namespace std;

class Bank{
    int account_number;
    string account_name;
    int current_balance;
    static int total_account;

    public:
    Bank(int number,string name,int balance){
        account_number = number;
        account_name = name;
        current_balance = balance;
        total_account++;
    }

    void depositMoney(int amount){
        if(amount<0){
            cout<<"Deposit Amount Can Not be Nagative"<<endl;
        }
        else{
            current_balance = current_balance + amount;
            cout<<"----------------------------------------------"<<endl;
            cout<<"After Deposit Money Account Blance is : "<<current_balance<<endl;
        }
    }

    void withdrawMoney(int amount){
        
        if(amount > current_balance){
            cout<<"No Overdraft Allowed"<<endl;
        }
        else if(amount<0){
            cout<<"Withdraw Amount Can Not be Nagative"<<endl;
        }
        else{
            current_balance = current_balance - amount;
            cout<<"After Withdraw Money Account Blance is : "<<current_balance<<endl;
        }
    }

    void check(){
        if(account_number<0){
            cout<<"Account Number Can Not be Nagative"<<endl;
        }
        else{
            return;
        }
    }

    void condition(){
        if(current_balance>0 && current_balance<100){
            cout<<"Low Balance"<<endl;
        }
        else if(current_balance>=1000 && current_balance<5000){
            cout<<"Regular Account" <<endl;
        }
        else{
            cout<<"Premium Account"<<endl;
        }
    }

    void display(){
        cout<<"Account Number : "<<account_number<<endl;
        cout<<"Account Holder Name : "<<account_name<<endl;
        cout<<"Current Balance in Account : "<<current_balance<<endl;
        cout<<"----------------------------------------------"<<endl;
    }

    static void show(){
        cout<<"Total Account : "<<total_account<<endl;
    }
};

int Bank::total_account = 0;

int main()
{
    Bank b1(-10001,"Princy",1000);
    b1.depositMoney(3000);
    b1.withdrawMoney(1000);
    b1.check();
    b1.condition();
    b1.display();

    Bank b2(10002,"Dhruvi",2000);
    b2.depositMoney(3000);
    b2.withdrawMoney(1000);
    b2.check();
    b2.condition();
    b2.display();

    Bank b3(10003,"Mahek",3000);
    b3.depositMoney(3000);
    b3.withdrawMoney(1000);
    b3.check();
    b3.condition();
    b3.display();

    Bank b4(10004,"Anandi",5000);
    b4.depositMoney(3000);
    b4.withdrawMoney(1000);
    b4.check();
    b4.condition();
    b4.display();

    Bank::show();

    return 0;
}