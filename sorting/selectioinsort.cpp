#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {34, 24, 76, 12, 4, 88, 39};
    int n = (sizeof(arr) / sizeof(arr[0])) - 1;
    for (int i = 0; i < n - 2; i++)
    {
        int min = i;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    cout << "the sorted array is" << endl;
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    cout << n << endl;
    return 0;
}