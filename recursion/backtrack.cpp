#include <bits/stdc++.h>
using namespace std;

void f(int i, int N, string s)
{
    if (i > N)
    {
        return;
    }
    f(i + 1, N, s);
    cout << s << endl;
}

int main()
{
    int i = 1, N = 0;
    string s = "";
    cout << "Enter the number of times and string to be called out" << endl;
    cin >> N;
    getline(cin, s);
    f(i, N, s);
    return 0;
}