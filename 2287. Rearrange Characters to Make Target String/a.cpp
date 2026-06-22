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
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> cntS, cntT;

        for (char c : s)
            cntS[c]++;

        for (char c : target)
            cntT[c]++;

        int ans = INT_MAX;

        for (auto [ch, freq] : cntT) {
            ans = min(ans, cntS[ch] / freq);
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