class Solution {
public:
    int n;
    int f(int i, int buy ,vector<int>& prices, int& fee ,vector<vector<int>>&dp){
        if(i==n) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy]; 
        int profit =0;
        if(buy){
            profit = max(
                - prices[i] + f(i+1,0,prices,fee,dp),
                f(i+1,1,prices,fee,dp)
            );
        }
        else{
            profit = max(
                prices[i] - fee +f(i+1,1,prices,fee,dp),
                f(i+1,0,prices,fee,dp)
            );
        }
        return dp[i][buy]=profit;     
    }
    int maxProfit(vector<int>& prices, int fee) {
        n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,prices,fee,dp);
    }
};