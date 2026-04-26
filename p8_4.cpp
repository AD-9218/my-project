#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    string name;

    while (true)
    {
        cout << "Enter file name (or exit): ";
        cin >> name;

        if (name == "exit")
            return 0;

        file.open(name);

        if (file)
            break;

        cout << "File not found. Try again.\n";
    }

    string line;
    int lineNo = 0;

    while (getline(file, line))
    {
        lineNo++;

        double sum = 0, num = 0;
        int count = 0;
        bool valid = true;

        for (int i = 0; i <= line.length(); i++)
        {
            if (isdigit(line[i]))
            {
                num = num * 10 + (line[i] - '0');
            }
            else if (line[i] == ' ' || line[i] == '\0')
            {
                sum += num;
                count++;
                num = 0;
            }
            else
            {
                valid = false;
                break;
            }
        }

        if (!valid || count == 0)
        {
            cout << "Line " << lineNo << " invalid\n";
        }
        else
        {
            cout << "Line " << lineNo << " Sum = " << sum << endl;
        }
    }

    file.close();
    return 0;
}