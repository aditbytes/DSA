#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;

class solution {
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> paths;
        string path = "";
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        
        function<void(int, int)> backtrack = [&](int r, int c) {
            if (r < 0 || c < 0 || r >= n || c >= n || m[r][c] == 0 || visited[r][c]) {
                return;
            }
            if (r == n - 1 && c == n - 1) {
                paths.push_back(path);
                return;
            }
            
            visited[r][c] = true;
            
            path.push_back('D');
            backtrack(r + 1, c);
            path.pop_back();
            
            path.push_back('L');
            backtrack(r, c - 1);
            path.pop_back();
            
            path.push_back('R');
            backtrack(r, c + 1);
            path.pop_back();
            
            path.push_back('U');
            backtrack(r - 1, c);
            path.pop_back();
            
            visited[r][c] = false;
        };
        
        backtrack(0, 0);
        return paths;
    }
};

int main() {
    vector<vector<int>> maze = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    int n = maze.size();
    
    solution sol;
    vector<string> result = sol.findPath(maze, n);
    
    if (!result.empty()) {
        cout << "Paths from source to destination:" << endl;
        for (const string& path : result) {
            cout << path << endl;
        }
    } else {
        cout << "No path found from source to destination." << endl;
    }
    
    return 0;
}