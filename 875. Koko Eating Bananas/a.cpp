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
    long long  helper(vector<int>& piles , int mid){
        long long ans =0;
        int n = piles.size();
        for(int i=0 ;i<n;i++){
            ans+=ceil((double)piles[i]/mid);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_ele=piles[0];        int n = piles.size();

        for(int i =0;i<n;i++){
            if(max_ele<piles[i]) max_ele=piles[i];
        }
        int lo =1;int hi = max_ele;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(helper(piles,mid) <= h ) {
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