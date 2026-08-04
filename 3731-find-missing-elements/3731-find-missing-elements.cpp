class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        int a = nums[0];
        int i =0;
        while(i<n){
            if(a!=nums[i]) {
                while(a!=nums[i]){
                    ans.push_back(a);
                    a++;
                }
            }
                a++;
            i++;
        }
       return ans;
    }
};