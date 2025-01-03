#include <iostream>
#include <vector>
using namespace std;

void fun(int arr[], int n, vector<int> v, int idx) {
    if (idx == n) {
        // Print the current subsequence
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude the current element
    fun(arr, n, v, idx + 1);

    // Include the current element
    v.push_back(arr[idx]);
    fun(arr, n, v, idx + 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Correct calculation
    vector<int> v;
    fun(arr, n, v, 0); // Call the function
    return 0;
}
