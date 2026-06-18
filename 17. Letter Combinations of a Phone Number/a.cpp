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
    vector<string> phone ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    void helper(string digits,int idx,string &temp){
        if(idx >= digits.size()) {ans.push_back(temp);return;}
        int num = digits[idx]-'0';
        for(auto ch : phone[num]){
            temp.push_back(ch);
            helper(digits,idx+1,temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string temp = "";
        helper(digits,0,temp);
        return ans;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}