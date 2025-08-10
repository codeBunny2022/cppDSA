#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int N)
{
    int val = 1, limit = sqrt(N);
    vector<int> v;
    while (val <= limit)
    {
        if (N % val == 0)
        {
            v.push_back(N / val);
            v.push_back(val);
        }
        val++;
    }
    return v;
}

int main()
{
    int N = 0;
    cout << "enter the Number to find its divisors" << endl;
    cin >> N;
    auto res = divisors(N);
    sort(res.begin(), res.end());
    for (auto itr = res.begin(); itr != res.end(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl
         << "are the divisors" << endl;
    return 0;
}