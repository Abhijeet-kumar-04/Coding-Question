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
    string frequencySort(string s) {
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }
        priority_queue<std::pair<int, char>> maxHeap;
        for (auto& pair : count) {
            maxHeap.push({pair.second, pair.first});
        }
        string result = "";
        while (!maxHeap.empty()) {
            int freq = maxHeap.top().first;
            char c = maxHeap.top().second;
            maxHeap.pop();
            result.append(freq, c); 
        }
        return result;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}