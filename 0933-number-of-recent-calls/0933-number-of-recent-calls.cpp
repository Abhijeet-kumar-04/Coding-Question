class RecentCounter {
public:
    vector<int>v;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        v.push_back(t);
        int n = v.size();
        int cnt=0;
        for(int i =n-1;i>=0;i--){
            if(t-v[i] >3000 ) {break;}
            cnt++;
        }
        return cnt;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

//  class RecentCounter {
// public:
//     queue<int> q;

//     RecentCounter() {
        
//     }
    
//     int ping(int t) {
//         q.push(t);

//         while (!q.empty() && q.front() < t - 3000) {
//             q.pop();
//         }

//         return q.size();
//     }
// };

// /**
//  * Your RecentCounter object will be instantiated and called as such:
//  * RecentCounter* obj = new RecentCounter();
//  * int param_1 = obj->ping(t);
//  */