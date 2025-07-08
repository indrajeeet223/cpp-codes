#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>

using namespace std;

int n;
unordered_set<int> visited;
vector<list<int>> graph; // Undirected unweighted graph

void edges(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end) {
    if (curr == end) return true;
    
    visited.insert(curr); // Mark as visited
    for (auto neighbour : graph[curr]) {
        if (!visited.count(neighbour)) {
            if (dfs(neighbour, end)) {
                return true;
            }
        }
    }
    return false;
}

bool any_path(int src, int dest) {
    visited.clear(); // Clear visited set before each search
    return dfs(src, dest);
}

int main() {
    cin >> n;
    graph.resize(n); // Correct graph initialization

    int e;
    cin >> e;
    
    while (e--) {
        int s, d;
        cin >> s >> d;
        edges(s, d);
    }

    int x, y;
    cin >> x >> y;
    cout << any_path(x, y);

    return 0;
}
