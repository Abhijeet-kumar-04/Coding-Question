class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        int n = nums.size();
        vector<vector<int>> v(n + 1);
        for(auto& ele : mp) {
            int a = ele.first;
            int b = ele.second;
            v[b].push_back(a);
        }
        vector<int> res;
        for(int i = n; i >= 0; --i) {
            for(int num : v[i]) {
                res.push_back(num);
                if(res.size() == k) {
                    return res;
                }
            }
        }
        
        return res;
    }
};