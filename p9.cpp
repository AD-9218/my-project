#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(const vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    int element;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of Vector :  ";
        cin >> element;
        vec.push_back(element);
    }
    vector<int> v2 = vec;

    cout << "After Reverse of Vector : " << endl;
    reverse(vec.begin(), vec.end());
    display(vec);


    vector<int>::iterator start = v2.begin();
    vector<int>::iterator end = v2.end() - 1;

    while (start < end)
    {
        swap(*start, *end);
        start++;
        end--;
    }
    cout << "Reversed manually using iterators: ";
    display(v2);

    return 0;
}