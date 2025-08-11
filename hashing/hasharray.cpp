#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int hash_size = 10; // size of hash array
    vector<int> hash_arr(hash_size, 0);

    // Simple hashing: count occurrences (could also store original values with chaining, but this is simplest)
    for (int i = 0; i < n; ++i) {
        int hash_index = arr[i] % hash_size;
        hash_arr[hash_index]++;
    }

    cout << "Hash array (index: count of elements hashed here):\n";
    for (int i = 0; i < hash_size; ++i) {
        cout << i << " : " << hash_arr[i] << endl;
    }

    return 0;
}
