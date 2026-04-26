#include <iostream>
using namespace std;
int main() {
double num= 2983.99;
int x = static_cast<int>(num);  // Explicit conversion using static_cast
cout<< "Original value (double): " << num<< endl;
cout<< "Converted value (int): " << x << endl;  // Output: 9
return 0;
}