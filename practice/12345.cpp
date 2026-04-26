#include <iostream>
using namespace std;
// Base Class: BankAccount
class BankAccount
{
protected:
    string accountHolder;
public:
BankAccount(){

}
    BankAccount(string name)
    {
        accountHolder = name;
    }
     ~BankAccount()
    {
        cout << "BankAccount Destructor called for " << accountHolder << endl;
    }
};
// Derived Class: SavingsAccount
class SavingsAccount : public BankAccount
{
public:
SavingsAccount(){}
    SavingsAccount(string name):BankAccount(name)
    {
		   
    }    
    ~SavingsAccount()
    {
        cout << "SavingsAccount Destructor called for " << accountHolder << endl;
    }
};
// Derived Class: CurrentAccount
class CurrentAccount : public BankAccount
{
public:
    CurrentAccount(string name) : BankAccount(name)
    {
    }
    ~CurrentAccount()
    {
        cout << "CurrentAccount Destructor called for " << accountHolder << endl;
    }
};
int main()
{
    BankAccount acc1 = SavingsAccount("Swayam");
    BankAccount acc2 = CurrentAccount("Sarthak");
    // delete acc1;
    // delete acc2;
    return 0;
}