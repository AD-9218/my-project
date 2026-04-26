#include <iostream>
using namespace std;

class item{
    int ID;
    string name;
    int price;
    int stock;
    public:
    int qu=0;
    item(int id,string n,int p,int s){
        ID=id;
        name=n;
        price=p;
        stock=s;
    }
    void set(int s1,int s2){
        stock=stock+s1;
        stock=stock-s2;
        // if(stock<5){
        //     cout<<"Low Inventory Alert\n";
        // }
    }
    void set_qu(){
        cout<<"How many product you purches:";
        cin>>qu;
        price=price*qu;
        if(price>100){
            price=price - price*0.1;
            cout<<"NEW Price :"<<price<<endl;
        }
    }
    void display(){
        cout<<"---------------------------------"<<endl;
        cout<<"Product Name :"<<name<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Total items:"<<stock<<endl;
        cout<<"---------------------------------"<<endl;
        
    }
};

int main()
{
    item t[3]={{1,"a",20,4},{2,"b",50,200},{3,"c",100,300}};
    for(int i=0;i<3;i++){
        t[i].display();
        t[i].set(5,5);
        t[i].set_qu();
        t[i].display();
    }

    return 0;
}