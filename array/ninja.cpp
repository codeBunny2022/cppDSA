// second largest and second smallest

#include <bits/stdc++.h>
using namespace std;

void ninja(int arr[], int n)
{
    int largest = INT_MIN, slargest = INT_MIN;
    int smallest = INT_MAX, ssmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < ssmallest && arr[i] != smallest)
        {
            ssmallest = arr[i];
        }
    }
    cout << "second greatest is " << slargest << " and second smallest is " << ssmallest << endl;
}

int main()
{
    cout << "enter the size of array" << endl;
    int n = 0;
    cin >> n;
    cout << "enter the array" << endl;
    int arr[n] = {};
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "you entered" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    ninja(arr, n);
    cout << endl;

    return 0;
}