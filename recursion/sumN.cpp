#include <bits/stdc++.h>
using namespace std;

int summ(int i, int N)
{
    if (i > N)
        return 0;              // base case
    return i + summ(i + 1, N); // return sum of current + rest
}

int main()
{
    int N = 0;
    cout << "till ehere to add the digits?" << endl;
    cin >> N;
    cout << "The sum is " << summ(1, N) << endl;
    return 0;
}
