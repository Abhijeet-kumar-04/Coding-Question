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
    double angleClock(int hour, int minutes) {
        // 60 min = 360 degree  
        // 1 min = 6 degree 
        // 12 hrs = 360 degree 
        // 1 hrs = 30 degree 
        // (1 hrs = 5 min ) in 1 degree 
        double hrs_angle = hour * 30 + ((double)minutes / 2.0) ;
        double min_angle = minutes * 6;
        double ans = abs(hrs_angle - min_angle );
        return min(ans,360-ans); 


    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}