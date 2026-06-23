#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <iomanip>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second

const int MOD = 1e9 + 7;
const ll INF = 1e18;

template<typename T>
T gcd(T a, T b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

template<typename T>
T lcm(T a, T b) {
    return a / gcd(a, b) * b;
}

class Solution {
public:
    vector<list< pair<int,int>> > graph;
    vector<bool> visited;
    int dfs(int node){
        int ans =0;
        for(auto ele  : graph[node]){
            if(visited[ele.first]==false){
                visited[ele.first]=true;
                ans+= ele.second + dfs(ele.first);
            }
        }
        return ans;
    }
    int minReorder(int n, vector<vector<int>>& v) {
        visited.resize(n,false);
        graph.resize(n,list<pair<int,int>>());
        for(int i =0;i< v.size();i++){
            int first = v[i][0];
            int second = v[i][1];
            graph[first].push_back({second,1});
            graph[second].push_back({first,0});
        }
        visited[0]=true;
        return dfs(0);
        

    }
};

int main() {
    fastio();

    

    return 0;
}

