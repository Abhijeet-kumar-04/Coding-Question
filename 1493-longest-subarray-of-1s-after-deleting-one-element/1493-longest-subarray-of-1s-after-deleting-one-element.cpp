class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0 , r=0 , ans =0;
        int n = nums.size();
        int zero = 0;
        while(r<n){
            if(nums[r]==0) {zero++;}
            if(zero<=k){
                int len = r-l+1;
                ans = max(len,ans);
            }
            else{
                if(nums[l]==0) {zero--;}
                l++;
            }
            r++;
        }
        return ans ;
    }
    int longestSubarray(vector<int>& nums) {
        return longestOnes(nums,1)-1;
    }
};