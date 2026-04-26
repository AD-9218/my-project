#include <iostream>
using namespace std;

class Binary {
    int val1;
    int val2;

public:
    // Constructor
    Binary(int a, int b) {
        val1 = a;
        val2 = b;
    }

    // Convert number to binary
    string toBinary(int num, int bit = 8) {
        string result = "";

        for(int i = bit - 1; i >= 0; i--) {
            result += ((num >> i) & 1) ? '1' : '0';
        }

        return result;
    }

    // Show using toBinary
    void show() {
        cout << toBinary(val1) << " " << toBinary(val2) <<endl;
    }
};

int main() {
    Binary b1(67, 69);
    b1.show();       
    return 0;
}