class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i =0;i<n;i++){
            if(v.size()==0 or v.back() < nums[i]){
                v.push_back(nums[i]);
            }
            else{
                auto it = lower_bound(v.begin(),v.end(),nums[i]);
                *it = nums[i];
            }
        }
        return v.size();
    }
};