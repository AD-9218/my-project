#include <iostream>
using namespace std;
// void modify(int* ptr) {
// *ptr= 42;
// }
int main()
{
    const int num = 10;
    int *ptr = const_cast<int *>(&num); // Removing const
    // modify(ptr);
    *ptr = 675;
    cout << "Modified value: " << *ptr << endl; // Output: 675 (Undefined behaviorwarning!)
    return 0;
}