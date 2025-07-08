#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<char>> grid;
vector<vector<string>> result;

bool canplacequeen(int rows, int col, int n) {
    // Column check
    for (int i = rows - 1; i >= 0; i--) {
        if (grid[i][col] == 'Q') {
            return false;
        }
    }
    // Check for the left diagonal
    for (int i = rows - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (grid[i][j] == 'Q') { // Can attack the queen
            return false;
        }
    }
    // Check for the right diagonal
    for (int i = rows - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (grid[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void f(int rows, int n) {
    if (rows == n) {
        // We got one valid solution
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;          
    }
    
    for (int col = 0; col < n; col++) {
        if (canplacequeen(rows, col, n)) {
            grid[rows][col] = 'Q'; // Place queen
            f(rows + 1, n);
            grid[rows][col] = '.'; // Backtrack
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    grid.assign(n, vector<char>(n, '.')); // Initialize grid
    result.clear(); // Clear previous results
    f(0, n);
    return result;
}

int main() {
    solveNQueens(7);
    
    return 0;
}
