class Solution {
public:
    int n1 ,n2;
    vector<vector<int>>dp;
    int f(int i , int j,string& word1, string& word2){
        if(i < 0) {return j+1;}
        if(j < 0) {return i+1;}
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]){
            return dp[i][j]= f(i-1,j-1,word1,word2);
        }
        else{
            return dp[i][j]= min(
                1+f(i-1,j,word1,word2),
                min(
                    1+f(i,j-1,word1,word2),
                    1+f(i-1,j-1,word1,word2)
                )
            );
        }
    }
    int minDistance(string word1, string word2) {
        n1 = word1.size();
        n2 = word2.size();
        dp.assign(n1+1,vector<int>(n2+1,-1));
        return f(n1-1,n2-1,word1,word2);
    }
};