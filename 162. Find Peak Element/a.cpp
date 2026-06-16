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
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int lo =1;
        int hi = n-2;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid+1]< nums[mid] && nums[mid]>nums[mid-1]) return mid;
            if(nums[mid]>nums[mid+1]){
                hi = mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return -1;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}