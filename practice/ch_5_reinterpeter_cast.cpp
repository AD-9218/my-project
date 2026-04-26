#include <iostream>
using namespace std;

int main()
{
    int num = 33;
    char *ptr = reinterpret_cast<char *>(&num);          // Reinterpreting intmemory as char*
    cout << "Reinterpreted character: " << *ptr << endl; // Output: 'A' (ASCII 65)
    return 0;
}