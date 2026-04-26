#include <iostream>
using namespace std;

class sum{
    public:
    int arr[5];
    void set(){
        for(int i=0;i<5;i++){
           cin>>arr[i];
        }
    }
    void iteration(int sum=0){
        for(int i=0;i<5;i++){
           sum=sum+arr[i];
        }
        cout<<"USE OF ITERATION SUM:"<<sum<<"\n";
    }

    int recusive(int n){
        for(int i=0;i<5;i++){
            if(n==0) return 0;
            return arr[n-1]+recusive(n-1);
        }
    }
};

int main()
{
    sum s;
    s.set();
    s.iteration();
    // s.recusive(5);
    cout<<"USE OF RECULSIVE SUM1:"<<s.recusive(5);
    return 0;
}
