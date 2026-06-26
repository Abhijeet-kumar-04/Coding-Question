class Solution {
public:
    vector<vector<int>>dp;
    int helper(const string &text1, const string &text2,int idx1,int idx2){
        if(idx1 <0 or idx2 < 0) return 0;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        if(text1[idx1]==text2[idx2]){
            return dp[idx1][idx2] = 1+ helper(text1,text2,idx1-1,idx2-1);
        }
        else{
            return dp[idx1][idx2] = max(helper(text1,text2,idx1-1,idx2),helper(text1,text2,idx1,idx2-1));
        }

    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size(); 
        int n2=text2.size();
        dp.resize(n1+1,vector<int>(n2+1,-1)); 
        return helper(text1,text2,n1-1,n2-1);
    }
};