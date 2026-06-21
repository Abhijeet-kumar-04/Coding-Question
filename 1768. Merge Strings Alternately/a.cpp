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
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n = word1.size(), m = word2.size();

        int i = 0;
        while (i < n || i < m) {
            if (i < n)
                ans += word1[i];
            if (i < m)
                ans += word2[i];
            i++;
        }

        return ans;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}