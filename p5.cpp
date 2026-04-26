#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string p;
    getline(cin, p);

    string words[100];
    int count[100];
    int n = 0;

    string w = "";

    for (int i = 0; i < p.length(); i++)
    {
        char ch = tolower(p[i]);
        if (isalpha(ch))
        {
            w += ch;
        }
        else
        {
            if (w != "")
            {
                bool f = false;
                for (int j = 0; j < n; j++)
                {
                    if (words[j] == w)
                    {
                        count[j]++;
                        f = true;
                        break;
                    }
                }
                if (!f)
                {
                    words[n] = w;
                    count[n] = 1;
                    n++;
                }
                w = "";
            }
        }
    }
    
    if (w != "")
    {
        bool f = false;
        for (int j = 0; j < n; j++)
        {
            if (words[j] == w)
            {
                count[j]++;
                f = true;
                break;
            }
        }
        if (!f)
        {
            words[n] = w;
            count[n] = 1;
            n++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << words[i] << " " << count[i] << endl;
    }

    return 0;
}