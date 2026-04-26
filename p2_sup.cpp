#include <iostream>
using namespace std;

class rectangular{
    float length,width;
    public:
    float perimeter_val,area_val;
    rectangular(){
        length=0;
        width=0;
    }

    rectangular(float l,float w){
        length=l;
        width=w;
    }

    int area(){
        if(length<0 || width<0){
            cout<<"NO Negative dimensions allowed."<<endl;
        }
        else{
            area_val=length*width;
        }
        return  0;
    }
    int perimeter(){
        if(length<0 || width<0){
            cout<<"NO Negative dimensions allowed."<<endl;
        }
        else{
            perimeter_val=2*(length+width);
        }
        return 0;
    }
    void display(){
        cout<<"---------------------------------"<<endl;
        cout<<"         Area :"<<area_val<<" m2"<<endl;
        cout<<"    Perimeter :"<<perimeter_val<<" m"<<endl;
        cout<<"---------------------------------"<<endl;
    }
    void check(){
        if(length==width){
            cout<<"this is not a rectangular,this is square"<<endl;
        }
        else{
            cout<<"this is a rectangular"<<endl;
        }
        

    }
};

int main()
{
    // int n=3,i;
    rectangular r[3]={{3.15,4.55},{1.342,5.66},{6.23,5.00}};

    for(int i=0;i<3;i++){
        r[i].area();
        r[i].perimeter();
        r[i].display();
        r[i].check();       

    }

    if((r[0].area())> (r[1].area())){
            cout<<"large area is : 1 st rectangular"<<endl;
        }
    else if((r[1].area())> (r[2].area())){
            cout<<"large area is : 3 st rectangular"<<endl;
        }
    else{
            cout<<"large area is : 3 st rectangular"<<endl;
        }

    
    return 0;
}