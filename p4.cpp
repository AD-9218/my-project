#include <iostream>
using namespace std;

int* insertAtEnd(int arr[], int size, int n){
    int* newArr = new int[size + 1];

    for(int i = 0; i < size; i++){
        newArr[i] = arr[i];
    }

    newArr[size] = n;
    return newArr;
}

int* deleteAt(int arr[], int size, int pos){
    if(size == 0){
        cout << "Array is empty\n";
        return arr;
    }

    if(pos < 0 || pos >= size){
        cout << "Invalid position\n";
        return arr;
    }

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

int main(){
    int size;

    cout << "Enter initial size: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    display(arr, size);

    // INSERT
    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    int* newArr = insertAtEnd(arr, size, value);
    delete[] arr;
    arr = newArr;
    size++;

    display(arr, size);

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    newArr = deleteAt(arr, size, pos);
    delete[] arr;
    arr = newArr;
    size--;

    display(arr, size);

    delete[] arr;
    return 0;
}
