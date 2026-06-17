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
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int freq[26] = {0}; 
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++; 
                int maxFreq = 0;
                int minFreq = n;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) { 
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                totalBeauty += (maxFreq - minFreq);
            }
        }
        return totalBeauty;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}