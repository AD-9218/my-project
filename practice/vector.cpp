#include <iostream>
#include <vector>
using namespace std;

template <class T> 

void display(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an element to add to this vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    cout << "After pop_back in vector : " << endl;
    vec1.pop_back();
    display(vec1);

    cout << "After begin in vector : " << endl;
    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter+1 , 566);//it is a possible pleace try to run
    vec1.insert(iter + 1, 2, 566);

    display(vec1);

    vector<char> vec2 = {'A','B','C'};
    // vector<int> vec3 = (vec1);//it is a possible pleace try to run
    vector<int> vec3(4 , 13);

    display(vec3);


    return 0;
}