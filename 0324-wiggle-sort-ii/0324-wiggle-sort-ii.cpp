class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mid;
        if( n% 2 ==0){
            mid = n/2;
        }
        else{
            mid = (n/2) +1 ; 
        }
        reverse(nums.begin(), nums.begin()+mid);
        reverse(nums.begin()+ mid, nums.end());
        vector<int> temp;
        int j = mid;
        for(int i =0 ;i<mid;i++){
            temp.push_back(nums[i]);
            if(j<n)temp.push_back(nums[j]);
            j++;
        }
        nums=temp;
    }
};