#include <bits/stdc++.h>
using namespace std;

void bintree(int n)
{

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1-start;
            // this is how we flip the values between one and zero
        }
        cout << endl;
    }
}

int main()
{
    int val = 0;
    cout << "enter the size of binary pattern" << endl;
    cin >> val;
    bintree(val);

    return 0;
}