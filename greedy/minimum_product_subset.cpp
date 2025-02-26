#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int product(vector<int>& arr) {
    int cn = 0, cp = 0, cz = 0;
    int prod_neg = 1, prod_pos = 1;
    int largest_negative = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            cz++;
        } else if (arr[i] < 0) {
            cn++;
            prod_neg *= arr[i];
            largest_negative = max(largest_negative, arr[i]);
        } else {
            cp++;
            prod_pos *= arr[i];
        }
    }

    // Case 1: If the array consists only of zeroes
    if (cn == 0 && cp == 0) return 0;

    // Case 2: If there are no negative numbers
    if (cn == 0) {
        return *min_element(arr.begin(), arr.end());  // Minimum positive or zero
    }

    // Case 3: If there are an even number of negative numbers, remove the smallest-magnitude negative number
    if (cn % 2 == 0) {
        prod_neg /= largest_negative;
    }

    return prod_neg * prod_pos;  // Final maximum product
}

int main() {
    vector<int> arr = {-1, -1, -2, 4, 3};
    cout << "Maximum Product: " << product(arr) << endl;
    return 0;
}
