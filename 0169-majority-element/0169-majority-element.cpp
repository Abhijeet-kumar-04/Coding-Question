class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max_element = nums[0];
        int cnt = 1 ;
        for(int i =1;i<nums.size();i++){
            if( nums[i] ==max_element ) {
                cnt++;
            }
            else{
                cnt--;
                if( cnt == 0 ){
                    max_element = nums[i];
                    cnt =1;
                }
            }
        }
        return max_element;

    }
};