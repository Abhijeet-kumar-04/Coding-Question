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
    int zigZagArrays(int n, int l, int r) {
        int k = r - l + 1;
        const int MOD = 1000000007;
        vector<vector<int>> dp(k + 1, vector<int>(2));
        for (int v = 1; v <= k; v++) {
            dp[v][0] = k - v; 
            dp[v][1] = v - 1; 
        }
        for (int i = 3; i <= n; i++) {
            vector<vector<int>> nextDp(k + 1, vector<int>(2));
            long long runSum0 = 0;
            for (int v = 1; v <= k; v++) {
                nextDp[v][1] = runSum0;
                runSum0 = (runSum0 + dp[v][0]) % MOD;
            }
            long long runSum1 = 0;
            for (int v = k; v >= 1; v--) {
                nextDp[v][0] = runSum1;
                runSum1 = (runSum1 + dp[v][1]) % MOD;
            }
            dp = nextDp;
        }

        long long total = 0;
        for (int v = 1; v <= k; v++) {
            total = (total + dp[v][0]) % MOD;
            total = (total + dp[v][1]) % MOD;
        }
        return total;
    }
};

int main() {
    fastio();

    

    return 0;
}

