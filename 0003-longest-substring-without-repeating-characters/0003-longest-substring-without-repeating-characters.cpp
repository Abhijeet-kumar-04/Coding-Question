class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int ans =0;
        int i =0;
        while(i<n){
            int j = i;set<char>st;
            while(j<n && st.count(s[j])==0 ){
                st.insert(s[j]);
                j++;
            }
            int len = j-i;
            i++;
            ans=max(len,ans);
        }
        return ans ;
    }
};