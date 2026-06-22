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
    string decodeString(string s) {
        stack<char>st;
        for(int i =0;i<s.size();i++){
            char ch = s[i];
            if(ch == ']'){
                string temp ="";
                while(st.top()!='['){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                string num ="";
                while(st.size() && (st.top() >= '0' && st.top() <= '9' )){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                int n = stoi(num);
                reverse(temp.begin(),temp.end());
                string ans="";
                while(n--){
                    ans+=temp;
                }
                for(auto ele: ans){
                    st.push(ele);
                }
            }
            else{
                st.push(ch);
            }
        }
        string res="";
        while(st.size()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res ;
    }
};

int main() {
    fastio();

    

    return 0;
}

