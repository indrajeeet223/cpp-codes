#include <iostream>
#include <vector>
#include <algorithm>  // For sort

using namespace std;

// Comparator function to sort items by value/weight ratio in descending order
bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
    double r1 = (double)p1.first / p1.second;
    double r2 = (double)p2.first / p2.second;
    return r1 > r2; // Sort in decreasing order of ratio
}

double fractionalKnapsack(vector<int>& profit, vector<int>& weight, int n, int W) {
    vector<pair<int, int>> arr;
    
    // Create a vector of {profit, weight} pairs
    for (int i = 0; i < n; i++) {
        arr.push_back({profit[i], weight[i]});
    }

    // Sort items based on value-to-weight ratio
    sort(arr.begin(), arr.end(), cmp);

    double result = 0; // Store the maximum profit

    for (int i = 0; i < n; i++) {
        if (arr[i].second <= W) {  // Take the whole item
            result += arr[i].first;
            W -= arr[i].second;
        } else {  // Take a fraction of the item
            result += (arr[i].first * 1.0 / arr[i].second) * W;
            break; // Since the knapsack is full, exit loop
        }
    }

    return result;
}

int main() {
    vector<int> profit = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int W = 50;
    int n = profit.size();

    double maxProfit = fractionalKnapsack(profit, weight, n, W);
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
