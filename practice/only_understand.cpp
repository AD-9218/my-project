#include <iostream>
using namespace std;
class Calculator
{
private:
    int value;
public:
    Calculator()
    {
        value = 0;
    }
    Calculator *add(int num)
    {
        value += num;
        return this;
    }
    Calculator *subtract(int num)
    {
        value -= num;
        return this;
    }
    Calculator *multiply(int num)
    {
        value *= num;
        return this;
    }
    void display()
    {
        cout << "Final Value: " << value << endl;
    }
};

int main()
{
    Calculator calc;
    // Method chaining
    calc.add(10)->multiply(5)->subtract(3)->display();
    return 0;
}