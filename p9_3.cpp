#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> arr={4,56,47,3,23,4,89,34};
    set<int> :: iterator it;

    arr.insert(32);

    for(it = arr.begin() ; it!=arr.end();it++){
        cout<< *it <<" ";
    }

    return 0;
}