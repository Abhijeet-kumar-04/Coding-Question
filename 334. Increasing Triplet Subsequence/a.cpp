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
    bool increasingTriplet(vector<int>& nums) {
        int i=INT_MAX;
        int j=INT_MAX;
        for(auto ele : nums){
            if(ele<= i) i=ele;
            else if(ele<=j) j =ele;
            else return true;
        }
        return false;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}