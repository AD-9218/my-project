#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    ifstream file("input.txt");

    if(!file){
        cout<<"Error opening file"<<endl;
        return 1;
    }

    string line;
    int lcount=0,wcount=0,ccount=0;
    
    while(getline(file,line)){
        lcount++;
        ccount += line.length() + 1; 
        
        bool inword=false;
        for(char ch:line){
            if(isspace(ch)){
                inword=false;
            }
            else if(!inword){
                wcount++;
                inword=true;
            }
        }
        cout<<line<<endl;
    }

    cout<<"line : "<<lcount<<endl;
    cout<<"character : "<<ccount<<endl;
    cout<<"word : "<<wcount<<endl;

    file.close();
}