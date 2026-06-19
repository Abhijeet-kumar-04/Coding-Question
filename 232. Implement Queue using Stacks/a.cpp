#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>      // For priority_queue (often used as a heap)
#include <algorithm>  // For make_heap, sort, min, max, etc.

using namespace std;

class MyQueue {
public:
    stack<int>st;
    int size;int Top;
    MyQueue() {
        size=0;
    }
    
    void push(int x) {
        st.push(x);
        if(size==0){
            Top=x;
        }
        size++;
    }
    
    int pop() {
        int n = size-1;
        stack<int> st1;
        while(n--){
            int top1=st.top();
            st.pop();
            st1.push(top1);
        }
        if(st1.size())Top=st1.top();
        int ans = st.top();
        st.pop();
        while(st1.size()){
            int x = st1.top();
            st1.pop();
            st.push(x);
        }
        size--;
        return ans;
    }
    
    int peek() {
        return Top;
    }
    
    bool empty() {
        return (size==0)  ? true : false ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}