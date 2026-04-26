#include <iostream>
#include <iomanip>
using namespace std;

ostream &currency(ostream &os)
{
    os << "$";
    return ;
}

int main()
{
    int n;
    cin >> n;
    string name[100];
    double marks[100], fees[100];

    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> marks[i] >> fees[i];
    }

    cout << setw(10) << "Name" << setw(10) << "Marks" << setw(10) << "Fees" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << name[i]
             << setw(10) << fixed << setprecision(2) << marks[i]
             << setw(5) << currency << fees[i] << endl;
    }

    return 0;
}