class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        if(m > n) return ans;
        
        vector<int> need(26,0);
        vector<int> win(26,0);
        for(auto ch  : p){need[ch-'a']++;}
        for(int i =0;i<m;i++){
            win[s[i]-'a']++;
        }
        int i =1;
        int j=m;
        if(need==win){
            ans.push_back(0);
        }
        while(j<n){
            win[s[i-1]-'a']--;
            win[s[j]-'a']++;
            if(need==win){
                ans.push_back(i);
            }
            i++;j++;
        }
        return ans ;
    }
};