class Solution {
public:
    int hIndex(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans = max(ans, min(nums[i], n - i));
        }
        return ans;
    }
};