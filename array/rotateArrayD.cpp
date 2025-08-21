#include <bits/stdc++.h>
using namespace std;

void leftRotateD(std::vector<int>& arr, int d) {
    int n = arr.size();
    if (n == 0) return; // Handle empty array case

    // 1. Correctly calculate effective rotations
    d = d % n;
    if (d == 0) return; // No rotation needed

    // Create a temporary vector to store the first 'd' elements
    std::vector<int> temp;
    for (int i = 0; i < d; i++) {
        // 2. Use assignment operator '=' instead of '=='
        temp.push_back(arr[i]);
    }

    // Shift the rest of the array elements
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Place the stored elements back at the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n = 0, d = 0;
    std::cout << "Enter the size of array" << std::endl;
    std::cin >> n;

    // Use std::vector for safety and standard compliance
    std::vector<int> arr(n);
    std::cout << "Enter the array elements" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of times to rotate" << std::endl;
    std::cin >> d;

    leftRotateD(arr, d);

    std::cout << "The rotated array is:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}