#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>      // For priority_queue (often used as a heap)
#include <algorithm>  // For make_heap, sort, min, max, etc.

using namespace std;

class Solution {
public:
    bool helper(vector<int>&v , int m ,int k,int mid ){
        int n = v.size();
        int c=0;int ans =0;
        for(int i =0;i<n;i++){
            if(v[i]<=mid){
                c++;
            }
            else{
                ans+=(c/k);
                c=0;
            }
        }
        ans += (c / k);
        return  (ans>=m) ? true:false;
    }
    int minDays(vector<int>& v, int m, int k) {
        int n = v.size();
        if((1LL)*m*k > n) return -1;
        int lo = INT_MAX ; int hi = INT_MIN;
        for(int i =0;i<n;i++){
            hi=max(v[i],hi);
            lo = min(v[i],lo);
        }
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(helper(v,m,k,mid)){
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        return lo;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}