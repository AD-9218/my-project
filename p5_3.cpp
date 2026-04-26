#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Item{
public:
    char name[50];
    int quantity;
    float price;
};

void addItem(){
    ofstream file("item.txt",ios::app);

    Item item;
    cout<<"Enter item name: ";
    cin>>item.name;
    cout<<"Enter quantity: ";
    cin>>item.quantity;
    cout<<"Enter price: ";
    cin>>item.price;

    file<<item.name<<" "<<item.quantity<<" "<<item.price<<endl;

    file.close();
}

void viewItems(){
    ifstream file("item.txt");
    
    Item item;
    cout<<"\nInventory List:\n";
    while(file>>item.name>>item.quantity>>item.price){
        cout<<"Name: "<<item.name<<endl;
        cout<<"Quantity: "<<item.quantity<<endl;
        cout<<"Price: "<<item.price<<endl;
    }

    file.close();
}

int compare(char a[],char b[]){
    return strcmp(a,b);
}

void searchItem(){
    ifstream file("item.txt");

    char searchName[50];
    Item item;
    int found=0;

    cout<<"Enter item name to search: ";
    cin>>searchName;

    while(file>>item.name>>item.quantity>>item.price){
        if(compare(item.name,searchName)==0){
            cout<<"\nItem Found!\n";
            cout<<"Name: "<<item.name<<endl;
            cout<<"Quantity: "<<item.quantity<<endl;
            cout<<"Price: "<<item.price<<endl;
            found=1;
            break;
        }
    }

    if(!found){
        cout<<"Item not found!\n";
    }

    file.close();
}

int main(){
    int choice;

    do{
        cout<<"\n--- Inventory Menu ---\n";
        cout<<"1. Add Item\n";
        cout<<"2. View All Items\n";
        cout<<"3. Search Item\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:addItem();break;
            case 2:viewItems();break;
            case 3:searchItem();break;
            case 4:cout<<"Exiting...\n";break;
            default:cout<<"Invalid choice!\n";
        }

    }while(choice!=4);

    return 0;
}