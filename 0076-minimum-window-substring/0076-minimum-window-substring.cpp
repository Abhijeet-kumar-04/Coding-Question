class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n < m) return "";
        map<char,int>mp;
        for(auto ch : t){
            mp[ch]++;
        }

        int l=0,r=0; int cnt=0;
        int idx =0;int minlen=INT_MAX;
        while(r<n){
            if(mp[s[r]] >0 ) cnt++;
            
            mp[s[r]]--;
            
            if(cnt == t.size()){
                if(minlen > r-l+1){
                    minlen = r-l+1;
                    idx = l;
                }
                while(l<n && cnt==t.size()){
                    if(minlen > r-l+1){
                        minlen = r-l+1;
                        idx = l;
                    }
                    mp[s[l]]++;
                    if(mp[s[l]] > 0 ) cnt --;
                    l++;
                }
            }
            r++;
        }
        if(minlen == INT_MAX) return "";
        return s.substr(idx,minlen);
    }
};