class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int lo = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int up = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lo==nums.size() or nums[lo]!=target ) return {-1,-1};
        return {lo,up-1};
    }
};