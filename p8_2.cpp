#include <iostream>
#include <cmath>
using namespace std;

class Negative_NumberException
{
public:
    int a;
    double result;
    void check()
    {
        try
        {
            if (a < 0)
            {
                throw "Negative number is not allowed for find root";
            }
            result = sqrt(a);
            cout << "result : " << result << endl;
        }
        catch (const char *msg)
        {
            cout << "Exception: " << msg << endl;
        }
    }
};

int main()
{

    Negative_NumberException nne;
    cin >> nne.a;
    nne.check();
    return 0;
}