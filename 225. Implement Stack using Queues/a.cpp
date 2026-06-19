#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>      // For priority_queue (often used as a heap)
#include <algorithm>  // For make_heap, sort, min, max, etc.

using namespace std;

class MyStack {
public:
    queue<int> qu;
    int size;
    int Top;
    MyStack() {
        size=0;
    }
    
    void push(int x) {
        qu.push(x);
        size++;
        Top=x;
    }
    
    int pop() {
        int n = size-1;
        while (n--){
            int top1 = qu.front();
            Top=top1;
            qu.push(top1);
            qu.pop();
        }
        int top1 = qu.front();
        qu.pop();
        size--;
        return top1;
    }
    
    int top() {
        return Top;
    }
    
    bool empty() {
        cout<<size<<" "<<!size;
        return (size==0) ? true : false ;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}