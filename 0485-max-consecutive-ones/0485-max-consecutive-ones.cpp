class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int ans =0;
        while(i<n){
            int len =0;
            while(i<n and nums[i]==1) {
                len++;
                i++;
            }
            ans = max(len , ans);
            i++;
        }
        return ans ;
    }
};