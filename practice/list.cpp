#include <iostream>
#include <list>
using namespace std;


void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main()
{
    list<int> list1;    // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    //remove some element
    // list1.pop_front();//first element remove
    // list1.remove(9);//Remove this number

    //sorting the list
    // cout<<"sorting of list_1 : "<<endl;
    // list1.sort();
    // display(list1);

    
    list<int> list2(3); // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    list1.sort();
    list2.sort();

    list1.merge(list2);
    cout<<"Merge of list : ";
    display(list1);

    cout<<"Reverse of merge list : "<<endl;
    list1.reverse();
    display(list1);

    return 0;
}