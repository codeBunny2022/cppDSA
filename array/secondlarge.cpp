#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n)
{
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
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
    cout << endl
         << "second largest element is" << endl;
    cout << secondlargest(arr, n) << endl;
    return 0;
}