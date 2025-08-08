#include <bits/stdc++.h>
using namespace std;

void revrat(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int val = 0;
    cout << "enter the length of reverse right triangle" << endl;
    cin >> val;
    revrat(val);
    return 0;
}