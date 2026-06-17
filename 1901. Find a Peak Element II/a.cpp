#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>      // For priority_queue (often used as a heap)
#include <algorithm>  // For make_heap, sort, min, max, etc.

using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& g) {
        int R = g.size(), C = g[0].size();
        int l = 0, h = C - 1;
        
        while (l <= h) {
            int m = l + (h - l) / 2;
            int mr = 0; // max row index
            
            // Find max element in column 'm'
            for (int i = 0; i < R; ++i) {
                if (g[i][m] > g[mr][m]) mr = i;
            }
            
            // Left and right neighbors
            int L = (m > 0) ? g[mr][m - 1] : -1;
            int R_val = (m < C - 1) ? g[mr][m + 1] : -1;
            
            // Peak condition
            if (g[mr][m] > L && g[mr][m] > R_val) return {mr, m};
            
            // Binary search logic
            if (L > g[mr][m]) h = m - 1;
            else l = m + 1;
        }
        
        return {-1, -1};
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}