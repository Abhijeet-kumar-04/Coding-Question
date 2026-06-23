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

    void dfs(TreeNode* root , int& ans, int dir){
        if(root==NULL) return;
        // if dir ==1 right else 2==left
        if(dir == 0 ){
            // going left
            int ans1 =0;
            if(root->left) {ans1++;dfs(root->left,ans1,2);}
            // going right
            int ans2 = 0;
            if(root->right) {ans2++;dfs(root->right,ans2,1);}
            
            ans = max(ans1,ans2);
        }
        else if(dir==1){
            // coming from right going left
            if(root->left) {ans++;dfs(root->left,ans,2);}

        }
        else if (dir == 2){
            // coming from left going right
            if(root->right) {ans++;dfs(root->right,ans,1);}
        }

    }
    int res=0;
    void helper(TreeNode* root){
        if(root==NULL) return;
        int ans =0;
        dfs(root,ans , 0);
        res=max(res,ans);
        helper(root->left);
        helper(root->right);
    }
    int longestZigZag(TreeNode* root) {
       helper(root);
       return res;
    }
};

int main() {
    fastio();

    

    return 0;
}

