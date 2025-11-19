#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
  
  // Helper function for backtracking
    void solve(int r, int c, vector<vector<int>> &maze, int n,
               vector<vector<int>> &visited, string path,
               vector<string> &result) {

        // If we reached the destination
        if (r == n-1 && c == n-1) {
            result.push_back(path);
            return;
        }

        // Mark current cell as visited
        visited[r][c] = 1;

        // ---- Move Down (D) ----
        if (r+1 < n && !visited[r+1][c] && maze[r+1][c] == 1) {
            solve(r+1, c, maze, n, visited, path + "D", result);
        }

        // ---- Move Left (L) ----
        if (c-1 >= 0 && !visited[r][c-1] && maze[r][c-1] == 1) {
            solve(r, c-1, maze, n, visited, path + "L", result);
        }

        // ---- Move Right (R) ----
        if (c+1 < n && !visited[r][c+1] && maze[r][c+1] == 1) {
            solve(r, c+1, maze, n, visited, path + "R", result);
        }

        // ---- Move Up (U) ----
        if (r-1 >= 0 && !visited[r-1][c] && maze[r-1][c] == 1) {
            solve(r-1, c, maze, n, visited, path + "U", result);
        }

        // Backtrack → unmark before returning
        visited[r][c] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> result;

        // If starting or ending cell is blocked
        if (maze[0][0] == 0 || maze[n-1][n-1] == 0)
            return result;

        vector<vector<int>> visited(n, vector<int>(n, 0));

        solve(0, 0, maze, n, visited, "", result);

        sort(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> paths = sol.ratInMaze(maze);

    if (paths.empty()) {
        cout << "No paths found." << endl;
    } else {
        cout << "Possible paths from start to destination:" << endl;
        for (const string &path : paths) {
            cout << path << endl;
        }
    }

    return 0;
}
