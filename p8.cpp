#include <iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        if (!(cin>>a>>b))
            throw "Invalid input for denominator!";

        if (b == 0)
            throw "Division by zero error!";

        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}