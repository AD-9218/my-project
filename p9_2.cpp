#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    string sentence , word ="";
    map <string , int> mymap;

     cout << "Enter sentence: ";
    getline(cin, sentence);

    for (int i = 0; i <= sentence.length(); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (word != "") {
                mymap[word]++;
                word = "";
            }
        } else {
            word += sentence[i];
        }
    }

    map<string , int> ::iterator it ;

    for (it = mymap.begin(); it != mymap.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}