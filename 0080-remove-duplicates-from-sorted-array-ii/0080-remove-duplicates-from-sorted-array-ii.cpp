class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int n = nums.size();int cnt =0;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                int j = i+2;
                while(j<n && nums[j]==nums[i]){
                    nums[j]=INT_MAX;
                    cnt++;
                    j++;
                }
                i =j;
            }
            else{
                i++;
            }
        }
        sort(nums.begin(),nums.end());
        return n - cnt;
    }
};