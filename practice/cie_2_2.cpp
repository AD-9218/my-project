#include <iostream>
using namespace std;

class DynamicArray{
public:

int* insert(int arr[], int size, int n){
    int* newarr= new int[size + 1];

    for(int i = 0; i < size; i++){
        newarr[i] = arr[i];
    }

    newarr[size] = n;
    return newarr;
}

int* deleteAt(int arr[], int size, int pos){
    
    int* newArr1 = new int[size - 1];

    for(int i = 0, j = 0; i < size; i++){
        if(i != pos){
            newArr1[j++] = arr[i];
        }
    }

    return newArr1;
}

void display(int arr[], int size){
    cout << "Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

~DynamicArray(){
    cout<<"the memory it was using is properly released."<<endl;
}

};

int main(){
    DynamicArray dm;
    int size;

    cout << "Enter size you want : ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    dm.display(arr, size);

    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    int* newArr = dm.insert(arr, size, value);
    delete[] arr;
    arr = newArr;
    size++;

    dm.display(arr, size);

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    newArr = dm.deleteAt(arr, size, pos);
    delete[] arr;
    arr = newArr;
    size--;

   dm. display(arr, size);

    delete[] arr;
    return 0;
}
