#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an Assoative Array
int main()
{
    map<string, int> marksMap;
    marksMap["Anandi"] = 10;
    marksMap["Hardi"] = 7;
    marksMap["Dhruvi"] = 8;
    marksMap["Princy"] = 9;

    marksMap.insert({{"a",53},{"b",76}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " : " << (*iter).second << "\n";
    }

    return 0;
}