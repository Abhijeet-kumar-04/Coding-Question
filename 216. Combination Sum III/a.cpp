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
    
    vector<vector<int>> ans;
    void helper(int idx,int k , int target,vector<int>& temp){
        if(temp.size()>k or target < 0) {return;}
        if(k==temp.size() and target == 0) {ans.push_back(temp);return;}
        for(int i=idx;i<=9;i++){
            temp.push_back(i);
            helper( i+1 , k , target - i , temp);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        helper(1,k,n,temp);
        return ans ;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}