#include <bits/stdc++.h>
using namespace std;

int GCD(int num1, int num2)
{
    int n = 1, val = 1;
    while (n <= min(num1, num2))
    {
        if (num1 % n == 0 & num2 % n == 0)
        {
            val = n;
        }
        n++;
    }
    return val;
}

int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "The GDC of " << num1 << " and " << num2 << " is " << GCD(num1, num2) << endl;
    return 0;
}