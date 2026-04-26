#include<iostream>
using namespace std;

class student{
private:
    int id;
    string name;
    int fees;
    int paid_amount;
    
public:
    student(int id,string name,int fees,int paid_amount){
        this->id=id;
        this->name=name;
        this->fees=fees;
        this->paid_amount=paid_amount;
    }

    void information(){
        if(fees>paid_amount){
            cout<<"Remain Fees is : "<<(fees - paid_amount)<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        else if(paid_amount>fees){
            // reci.paid_amount +=(fees - paid_amount);
            cout<<"you are overpyment is total :"<<(paid_amount - fees)<<endl;
            cout<<"---------------------------------------"<<endl;
        }
        else{
            cout<<"Fees is completed !"<<endl;
            cout<<"---------------------------------------"<<endl;
        }
    }
    void display(){
        cout<<"student name is :"<<name<<endl;
        cout<<"student ID is :"<<endl;
        cout<<"total Fees is :"<<fees<<endl;
        cout<<"---------------------------------------"<<endl;
    }
        
};

int main()
{
    student s1(1001,"aayusi",150000,160000);
    s1.display();
    s1.information();
    return 0;
}