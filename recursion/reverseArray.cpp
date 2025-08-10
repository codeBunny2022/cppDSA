#include <bits/stdc++.h>
using namespace std;

void rever(vector<int> &v, int i, int N)
{
    // base condition
    if (i >= N / 2) // going halfway
    {
        return;
    }

    // swapping part
    int temp = v.at(i);
    v.at(i) = v.at(N - 1 - i);
    v.at(N - 1 - i) = temp;

    // recursion call
    rever(v, i + 1, N);
}

int main()
{
    int N = 0;
    cout << "enter the size of array" << endl;
    cin >> N;
    cout << "now enter the values" << endl;

    // consuming the inputs
    vector<int> v(N, 0);
    for (int j = 0; j < N; j++)
    {
        cin >> v[j];
    }

    // calling the recursive reverse function
    rever(v, 0, N);

    // printing the reversed output
    cout << "Reversed array: ";
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}