#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

using namespace std;

int n;
unordered_set<int> visited;
vector<list<int>> graph;  // Undirected unweighted graph
vector<vector<int>> result;

void edges(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int>& path) {
    if (curr == end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);  // Mark as visited
    path.push_back(curr);

    for (auto neighbour : graph[curr]) {
        if (!visited.count(neighbour)) {
            dfs(neighbour, end, path);
        }
    }

    path.pop_back();  // Backtrack
    visited.erase(curr); // Remove from visited to allow other paths

    return;
}

void all_path(int src, int dest) {
    visited.clear();  // Clear visited set before each search
    result.clear();   // Clear previous results
    vector<int> path;
    dfs(src, dest, path);
}

int main() {
    cin >> n;
    graph.resize(n);  // Correct initialization

    int e;
    cin >> e;
    
    while (e--) {
        int s, d;
        cin >> s >> d;
        edges(s, d);
    }

    int x, y;
    cin >> x >> y;

    all_path(x, y);

    for (auto path : result) {
        for (auto node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
