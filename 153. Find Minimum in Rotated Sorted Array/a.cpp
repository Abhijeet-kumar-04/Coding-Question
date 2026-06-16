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
    int helper(vector<int>&nums , int lo ,int hi ){
        int n = nums.size();
        while(lo<=hi){
            
            if(nums[lo]<nums[hi]) return nums[lo];
            int mid=lo+(hi-lo)/2;
            if(lo==mid) return nums[hi];
            if(nums[lo]<nums[mid]){
                lo=mid;
            }
            else{
                hi=mid;
            }
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);        
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}