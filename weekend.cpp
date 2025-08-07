#include <bits/stdc++.h>

using namespace std;

int main()
{
    int day;
    cout << "enter the day from 1(monday) to 7(sunday)" << endl;
    cin >> day;
    if (0 < day && day< 8)
    {
        switch (day)
        {
        case 6:
            cout << "its SATURDAY my dudes!" << endl;
            break;
        case 7:
            cout << "its SUNDAY my dudes!!" << endl;
            break;
        default:
            cout << "Its not weekend yet" << endl;
        }
    }
    else
    {
        cout << "only enter values between 1 to 7" << endl;
    }

    return 0;
}