class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        double sum =0;
        for(int i =0;i<k;i++){
            sum+=nums[i];
        }
        int n = nums.size();
        ans = max(ans,sum);
        for(int i = k ;i<n;i++){
            double newsum = sum - nums[i-k] + nums[i];
            sum = newsum;
            ans = max(ans,sum);
        }
        return ans/k;
    }
};