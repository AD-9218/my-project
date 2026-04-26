#include <iostream>
#include<cmath>
using namespace std;

class EMI{
    public:
    int id;
    string name;
    float p;//total amount
    float annual_r,R;//monthly rate
    int t=12;//total duaration in one
    float emi;

    EMI(){

    }

    EMI(float amount,float rate){
        p=amount;
        annual_r=rate;
    }

    void set()
    {
        R=annual_r/(12*100);
        // if(t<0 || p<0){
        //     cout<<"PLEASE ENTER TENSURE and AMOUNT ARE POSITIVE"<<endl;
        // }
        // else{
        //     return;
        // }
    }

    void Emi(){
        emi=(p*R*pow(1+R,t))/(pow(1+R,t)-1);
    }

    void get(){
        cout<<" ANNUL RATE IS :"<<annual_r<<" %"<<endl;
        cout<<"------EMI------:"<<emi<<endl;
    }
};

int main()
{
    EMI e1(12000,12);
    e1.set();
    e1.Emi();
    e1.get();

    return 0;
}