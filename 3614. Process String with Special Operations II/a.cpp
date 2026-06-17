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
    char processStr(string s, long long k) {
        long long n =0;
        for(char ele : s){
            if(ele >= 'a' and ele <= 'z' ) {n++;}
            else if(ele == '*') {if(n > 0) n--;}
            else if(ele == '#') {n*=2;} 
        }
        if(k>=n ) return '.';
        for(long long i = s.size()-1;i>=0;i--){
            char ch = s[i];
            if(ch>= 'a' and ch <= 'z' ) {n -- ; if(n == k) return ch;}
            else if(ch == '*') {n++;}
            else if(ch == '#') {n = n/2;if(k>=n) k=k-n;}
            else if(ch == '%') {k = n-1-k;}
        }
        return '.';
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}