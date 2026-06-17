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
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;
        for (int i = 0; i < s.length(); i++) {
            char charS = s[i];
            char charT = t[i];
            if (mapST.count(charS) && mapST[charS] != charT) {
                return false;
            }
            if (mapTS.count(charT) && mapTS[charT] != charS) {
                return false;
            }
            mapST[charS] = charT;
            mapTS[charT] = charS;
        }
        return true;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}