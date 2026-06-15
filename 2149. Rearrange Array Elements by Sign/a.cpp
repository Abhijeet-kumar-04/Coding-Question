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
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        for(auto ele : nums){
            if(ele<0)v1.push_back(ele);
            if(ele>0)v2.push_back(ele);
        }
        int j=0;
        for(int i=0;i<v1.size();i++){
            nums[j]=v2[i];
            j++;
            nums[j]=v1[i];
            j++;
        }
        return nums;
    }
};
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}