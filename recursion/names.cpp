#include <bits/stdc++.h>
using namespace std;

void f(int i, int N)
{
    // cout << "Chirag" << endl;
    if (i >= N)
    {
        return;
    }
    cout << "Chirag" << endl;
    f(i + 1, N);
}

int main()
{
    int i = 1, N = 0;
    cout << "How many times" << endl;
    cin >> N;
    f(i, N);
    return 0;
}