#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int f[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if (c == ' ')
            continue;

        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        f[c]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (f[i] > 0)
            cout << (char)i << " " << f[i] << endl;
    }

    int v = 0, cns = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if (c == ' ')
            continue;

        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        if (c >= 'a' && c <= 'z')
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                v++;
            else
                cns++;
        }
    }

    cout << "Vowels " << v << endl;
    cout << "Consonants " << cns << endl;

    int max = 0;
    char ch;

    for (int i = 0; i < 256; i++)
    {
        if (f[i] > max)
        {
            max = f[i];
            ch = (char)i;
        }
    }

    cout << "Most " << ch << " " << max << endl;

    return 0;
}