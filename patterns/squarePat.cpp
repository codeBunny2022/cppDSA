#include <bits/stdc++.h>

using namespace std;

void squarePattern(int n)
{
    // int i = 0, j = 0;
    // its about the lifetime of these variables declaring j outside will require us to reset its value every time we enter the inner loop
    int lim = n;
    for (int i=0; i < lim; i++)
    {
        for (int j=0; j < lim; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int val = 0;
    cout << "enter the size of square pattern you want" << endl;
    cin >> val;
    squarePattern(val);
    return 0;
}