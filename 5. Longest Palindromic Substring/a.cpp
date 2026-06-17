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
    void helper(string s, int left, int right, int& bestStart, int& bestLength) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            int currentLength = right - left + 1;
            if (currentLength > bestLength) {
                bestStart = left;
                bestLength = currentLength;
            }
            left--;
            right++;
        }
    }
    int beautySum(string s) {
        
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}