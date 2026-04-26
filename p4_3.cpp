#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    int *add = new int[n+m];

    cout<<"Enter arr1 Element : ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    cout<<"Enter arr2 Element : ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++){
        add[i]=arr1[i];
        // cout<<add[i];
    }

    for(int i=0;i<m;i++){
        add[n+i]=arr2[i];
        // cout<<add[i];
    }

     for(int i=0;i<m+n;i++){
        cout<<add[i]<<" ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] add;

    return 0;
}