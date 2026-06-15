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
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a, b;
        a = b = 0;
        int c1=0, c2=0;
        for(int i =0;i<n;i++){
            if(nums[i]==a) c1++;
            else if(nums[i]==b) c2++;
            else if(c1==0) {a=nums[i];c1++;}
            else if(c2==0) {b=nums[i];c2++;}
            else {c1--;c2--;}
        }
        c1=c2=0;
        for(auto ele : nums){
            if(ele == a ) c1++;
            if(ele == b ) c2++;
        }
        vector<int>ans;
        if(c1>n/3) ans.push_back(a);
        if(a!=b and c2>n/3) ans.push_back(b);
        return ans;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}