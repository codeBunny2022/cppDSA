#include <iostream>
#include <vector>

void quickSort(std::vector<int>& arr, int low, int high);
int partition(std::vector<int>& arr, int low, int high);

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);   // sort left part
        quickSort(arr, pivotIndex + 1, high);  // sort right part
    }
}

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // first element as pivot
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i > j) break;
        std::swap(arr[i], arr[j]);
    }
    std::swap(arr[low], arr[j]);
    return j; // pivot final position
}

// Example usage
int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 5};
    quickSort(arr, 0, arr.size() - 1);
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
