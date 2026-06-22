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
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i =0;int j =n-1;int ans =0;
        while(i<j){
            if(nums[j]>k) {j--;continue;}
            int sum = nums[i]+nums[j];
            if(sum<k) {i++;}
            else if(sum==k){ans++;i++;j--;}
            else if(sum> k) {j--;}
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