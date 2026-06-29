class Solution {
public:
    
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        unordered_map<char,int>mp;
        int n = s.size();
        for(int i =0;i<n;i++){
            mp[s[i]]=i;
        }
        int i =0;int j = mp[s[i]];
        while(i<n){
            int k = i+1;
            while(k<j){
                j = max(j,mp[s[k]]);
                k++;
            }
            ans.push_back(j-i+1);
            i=j+1;
            j = mp[s[i]];
        }
        return ans;

    }
};