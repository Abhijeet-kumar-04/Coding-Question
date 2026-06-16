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
    bool BinarySearch(vector<int>& nums,int target,int lo ,int hi){
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target) return true;
            if(nums[lo]==nums[mid]and nums[mid]==nums[hi]){
                lo++;
                hi--;
                continue;
            }
            if(nums[lo]<=nums[mid]){
                if(nums[lo]<=target and target < nums[mid]){
                    hi = mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            else{
                if(nums[mid]<target and target <= nums[hi]){
                    lo=mid+1;
                }
                else{
                    hi = mid-1;
                }
            }
        }
        return false;
        
    }
    bool search(vector<int>& nums, int target) {
        return BinarySearch(nums,target,0,nums.size()-1);
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}