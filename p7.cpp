#include <iostream>
using namespace std;

class sum_two_number{
    public:
    int sumNUMBER(int a, int b){
        return a+b;
    }
    float sumNUMBER(float a,float b){
        return a+b;
    }
};

int main()
{
    sum_two_number s1;
    int sum1 = s1.sumNUMBER(2, 1);
    cout << "Sum is : " << sum1 << endl;

    float sum2 = s1.sumNUMBER(2.3f, 0.7f);
    cout << "Sum is : " << sum2 << endl;

    int sum3 = s1.sumNUMBER(2, (int)1.0);
    cout << "Sum is : " << sum3 << endl;

    return 0;
}