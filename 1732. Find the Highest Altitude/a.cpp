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
    int largestAltitude(vector<int>& gain) {
        int ans =0; 
        for(int i =1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
            ans=max(gain[i],ans);
        }
        return max(ans,gain[0]);

    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}