#include <bits/stdc++.h>
using namespace std;

int main()
{
    // defining a simple pair
    pair<int, int> p = {1, 2};
    cout << p.first << endl;
    cout << p.second << endl;

    // defining an array of pairs

    pair<int, int> arr[5] = {};
    cout << arr << endl;
    cout << "enter the values in array of pairs" << endl;
    cin >> arr[1].first;
    cout << arr[0].first << " " << arr[0].second << " " << arr[1].first << endl;

    return 0;
}