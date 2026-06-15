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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<vector<int>>ans;
        if (n < 4) return ans;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-3;i++){
            if(i>0 and nums[i]==nums[i-1] ) continue;
            for(int j =i+1;j<n-2;j++){
                if(j>i+1 and nums[j]==nums[j-1] ) continue;
                int left = j+1;int right = n-1; 
                while(left<right){
                    long long total = (long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(total == target ) {
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    }
                    else if(total < target) left++;
                    else right--; 
                }
            }
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