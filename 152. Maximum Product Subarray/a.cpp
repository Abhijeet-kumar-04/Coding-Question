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
    int maxProduct(vector<int>& nums) {
        int pre=1;
        int suf=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            if(pre==0) pre=1;
            if(suf==0) suf=1;

            pre=pre*nums[i];
            suf=suf*nums[nums.size()-1-i];
            ans=max(ans,max(pre,suf));
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