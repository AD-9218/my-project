#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<string, vector<string>> mm;
    map<string , vector<string>> :: iterator itm;

    string st;
    string element;
    vector<string> vec(4);
    vector<string> :: iterator itv;
    int m;

    for(int i = 0; i < 3; i++){
        cout << "Enter folder name: ";
        getline(cin , st);

        cout << "Enter number of files: ";
        cin >> m;

        for(int j = 0; j <= m; j++){
            getline(cin, element);
            mm[st].push_back(element);
        }
    }

     for(itm = mm.begin() ; itm != mm.end() ; itm++){
        cout<<itm->first<<"  : ";
        for(string f : itm->second){
            cout << f << " ";
        }
        cout << endl;
    }

    return 0;
}