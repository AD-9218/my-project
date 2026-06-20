#include <iostream>
using namespace std;

int main()
{
    try
    {
        int withdraw;
        int balance;
        cin >> withdraw >> balance;

        if (withdraw > balance)
        {
            throw "Insufficient balance";
        }
        
    }

    catch (const char *msg)
    {
        cout << "ERROR : " << msg << endl;
    }

    try{
        int a=10,b=0;
        if(b==0){
            throw"Divided by 0";
        }
        int result=a/b;
       }

    catch(const int code){
        cout << "ERROR : " << code << endl;
    }
    catch (const char *msg)
    {
        cout << "ERROR : " << msg << endl;
    }
    catch(...){
        cout << "ERROR" << endl;

    }
    return 0;
}