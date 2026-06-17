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
    string reverseWords(string s) {
        string ans ="";
        string temp ="";
        int n = s.size();
        for(int i =0;i<n;i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            if(s[i]==' '){
                if(temp == ""){continue;}
                else {
                    if(ans=="") {ans=temp;temp="";continue;}
                    ans = temp + " "+ans;
                    temp="";
                }
            }
        }
       if(temp != "") {
            if(ans == "") { ans = temp; }
            else { ans = temp + " " + ans; }
        }
        return ans ;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}