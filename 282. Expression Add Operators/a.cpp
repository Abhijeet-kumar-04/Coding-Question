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
    vector<string> ans;
    void helper(string& num, int target, int idx, long long calc, long long tail, string temp) {
        if (idx == num.size()) {
            if (calc == target) {
                ans.push_back(temp);
            }
            return;
        }
        for (int i = idx; i < num.size(); i++) {
            if (i != idx && num[idx] == '0') break;
            string curStr = num.substr(idx, i - idx + 1);
            long long curNum = stoll(curStr); 
            if (idx == 0) {
                helper(num, target, i + 1, curNum, curNum, curStr);
            } else {
                helper(num, target, i + 1, calc + curNum, curNum, temp + "+" + curStr);
                helper(num, target, i + 1, calc - curNum, -curNum, temp + "-" + curStr);
                helper(num, target, i + 1, calc - tail + (tail * curNum), tail * curNum, temp + "*" + curStr);
            }
        }
    }
    
    vector<string> addOperators(string num, int target) {
        if (num.empty()) return {};
        helper(num, target, 0, 0, 0, "");
        return ans;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}