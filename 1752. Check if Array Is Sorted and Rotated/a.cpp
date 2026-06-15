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
    bool check(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                ans++;
            }
        }
        if(nums[n-1]>nums[0]) ans++;
        return (ans<2) ? true:false;
    }
};


int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}