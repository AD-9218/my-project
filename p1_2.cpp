#include <iostream>
using namespace std;

class library{
    int bookid;
    string title;
    string author;
    
    public:
    static int copies;
    int b_issu;
    library(int bi,string t,string a,int c){
        bookid=bi;
        title=t;
        author=a;
        copies=c;
    }

    // ~library(){
    //     cout<<"Hello"<<endl;
    // }

    static void Add(int add){
        copies=copies+add;
        cout<<"Add :"<<copies<<endl;
    }

    static void issu(int b_issu){
        if(copies>b_issu){
            cout<<"you issuing a copies"<<endl;
            cout<<"how many book issued:"<<b_issu<<endl;
            // cin>>b_issu;
            copies=copies-b_issu;
        }
    }

    void display(){
        // cout<<"issued book"<<b_issu<<endl<<"copies:"<<copies<<endl;
        cout<<"Book ID:"<<bookid<<endl;
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Total book:"<<copies<<endl;
    }
};

int library::copies=0;

int main()
{
    library l(101,"tital","author",10);
    library::Add(2);
    library::issu(2);
    // library::issu(2);
    l.display();

    library l2(101,"title","author",library::copies);
    // library::Add(2);
    library::issu(2);
    l2.display();
    
    return 0;
}