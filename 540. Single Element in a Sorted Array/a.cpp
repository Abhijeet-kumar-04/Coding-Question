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
    int singleNonDuplicate(vector<int>& nums) {
        int  n = nums.size();
        if(n==1) return nums[0];
        if(nums[0]!= nums[1]) return nums[0];
        if(nums[n-2]!= nums[n-1]) return nums[n-1];
        int lo =1; int hi = n-2;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]!= nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
            if((mid%2 == 1 && nums[mid-1]==nums[mid]) ||(mid%2==0 && nums[mid]==nums[mid+1])  ){
                lo = mid+1;
            }
            else {
                hi = mid-1;
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