#include <bits/stdc++.h>
using namespace std;

void numrevrat(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int val = 0;
    cout << "enter the length of reverse right triangle" << endl;
    cin >> val;
    numrevrat(val);
    return 0;
}