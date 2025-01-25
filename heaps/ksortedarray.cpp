#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int arr[] = {3, 2, 4, 1, 6, 7, 5, 8, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> pq; // min priority queue

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
        if (pq.size() > k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

   
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    
    return 0;
}
