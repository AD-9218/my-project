#include <iostream>
using namespace std;

class super{
    public:
    
    static int digit_to_number(int digit) {
        
        if(digit==0)
        return 0;
    
        return (digit%10) + digit_to_number(digit/10);
    }

    static int digit(int n){
        if(n<10)
        return n;
    return digit(digit_to_number(n));
    }
    
    static int solve (int n,int k){
        int sum=digit_to_number(n);
        sum=sum*k;
        return digit(sum);
    }

};

int main() {

    cout<<super::solve(9875,4);
    
    return 0;
}  