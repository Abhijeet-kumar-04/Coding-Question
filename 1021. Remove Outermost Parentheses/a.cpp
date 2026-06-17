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
    string removeOuterParentheses(string s) {
        string res = "";
        int opened = 0;
        
        for (char c : s) {
            if (c == '(') {
                if (opened > 0) {
                    res += c;
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    res += c;
                }
            }
        }
        return res;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}