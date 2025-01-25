#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int arr[] = {3, 2, 4, 1, 6, 7, 5, 8, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
   int idx=0;
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> pq; // min priority queue

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
           arr[idx++]=pq.top();
            pq.pop();
        }
    }

    // After the loop, the remaining elements in pq are the smallest k elements
    while (!pq.empty()) {
        arr[idx++]=pq.top();
        pq.pop();
    }

    // Output the k smallest elements
    for (int i = 0; i <n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
