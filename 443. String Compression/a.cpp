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
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0;int j =0;
        while(j<n){
            if(j<n-1 && chars[j]!=chars[j+1]){
                chars[i]=chars[j];
                i++;
                j++;
            }
            else{
                int cnt =1;
                while(j<n-1 and chars[j]==chars[j+1]){
                    cnt++;j++;
                }
                chars[i]=chars[j];i++;
                if(cnt > 1){
                    string s = to_string(cnt);
                    for(auto ele : s){
                        chars[i]=ele;
                        i++;
                    }
                }
                j++;
            }
        }
        return i;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}