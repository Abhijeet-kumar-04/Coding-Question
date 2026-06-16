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
    int helper(vector<int>& nums, int capacity) {
        int currentLoad = 0;int daysNeeded = 1;
        for (int weight : nums) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = 0; 
            }
            currentLoad += weight;
        }
        return daysNeeded;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int n = nums.size();
        int lo =INT_MIN;
        int hi =0;
        for(int i =0;i<n;i++){
            lo=max(lo,nums[i]);
            hi+=nums[i];
        }
        if(days==1) return hi;
        while(lo<hi){
            int mid = lo+(hi-lo)/2;
            if(helper(nums,mid)<=days){
                hi = mid;
            }
            else{
                lo =mid+1;
            }
        }
        return lo;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}