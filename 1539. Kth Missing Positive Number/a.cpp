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
    int findKthPositive(vector<int>& arr, int k) {
        int  n = arr .size();
        int lo = 0; int hi = n-1 ;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int missing = arr[mid]-(mid+1);
            if(missing < k){
                lo = mid +1;
            }
            else {
                hi = mid -1;
            }
        }
        return lo +k;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}