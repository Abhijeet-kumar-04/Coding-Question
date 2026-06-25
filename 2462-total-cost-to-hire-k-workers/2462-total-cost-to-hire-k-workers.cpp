class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> a , b;
        int len = k;
        int n = costs.size();
        int i =0;int j =n-1;
        long long ans =0;
        while(len--){
            while(a.size()<candidates && i<=j){
                a.push(costs[i]);i++;
            }
            while(b.size()<candidates && j>=i){
                b.push(costs[j]);j--;
            }
            int min_a = (a.size()) ? a.top():INT_MAX;
            int min_b = (b.size()) ? b.top():INT_MAX;
            if(min_a <= min_b){
                ans+=min_a;
                a.pop();
            }
            else{
                ans+=min_b;
                b.pop();
            }
        }
        return ans ;
    }
};