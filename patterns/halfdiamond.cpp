#include <bits/stdc++.h>
using namespace std;

void rat(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int val = 0;
    cout << "enter the size of Right Angled diamond" << endl;
    cin >> val;
    rat(val);
    return 0;
}