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
    bool isSubsequence(string s, string t) {
        if(s=="") return true;
        int i =0;int j =0;
        while(i<s.size() && j<t.size()){
            cout<<i<<" "<<j<<endl;
            if(s[i]==t[j] && i==s.size()-1) return true;
            if(s[i]==t[j]) {i++;j++;}
            else{
                j++;
            }
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