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
    int helper(vector<int>& nums , int mid ){
        int split =1 ;
        int sum = 0;int n = nums .size();
        for(int i =0;i<n;i++){
            if(sum + nums[i]<=mid){
                sum+=nums[i];
            }
            else {
                split++;
                sum = nums[i];
            }
        }
        return split;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<k) return -1;
        int lo = *max_element(nums.begin(),nums.end());
        int hi = accumulate(nums.begin(),nums.end(),0);
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(helper(nums,mid) > k ){
                lo = mid +1;
            }
            else{
                hi = mid -1 ;
            }
        }
        return lo ;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}