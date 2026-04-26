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

    void area(){
        area_val=length*width;
    }
    void perimeter(){
        perimeter_val=2*(length+width);
    }
    void display(){
        cout<<"---------------------------------"<<endl;
        cout<<"         Area :"<<area_val<<" m2"<<endl;
        cout<<"    Perimeter :"<<perimeter_val<<" m"<<endl;
        cout<<"---------------------------------"<<endl;
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
    }

    return 0;
}