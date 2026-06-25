class Solution {
public:
    long long  countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long ans =0;
        for(int i =0;i<n;i++){
            int cnt =0 ;
            for(int j=i;j<n;j++){
                
                int len = j-i +1;
                if(nums[j]==target) cnt++;
                if(cnt > len/2 ){
                    ans++;
                }
            }
        }
        return ans ;
    }
};