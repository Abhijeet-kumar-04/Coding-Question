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
    int helper(vector<int>& nums ,int mid){
        int ans =0;int n = nums.size();
        for(int i=0;i<n;i++){
            ans += (nums[i] + mid - 1) / mid;
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int lo = 1;int hi=INT_MIN;
        for(int i=0;i<n;i++){
            hi = max(nums[i],hi);
        }
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(helper(nums,mid) <= threshold ){
                hi = mid-1;
            }
            else{
                lo = mid+1;
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