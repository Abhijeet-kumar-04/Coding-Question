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
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i =n-1;i>=0;i--){
            if(num[i]%2!=0){
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}