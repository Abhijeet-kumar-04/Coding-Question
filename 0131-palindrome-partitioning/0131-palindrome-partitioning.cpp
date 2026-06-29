class Solution {
public:
    vector<vector<string>> ans;
    vector<string> cur;

    bool isPal(string &s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    void dfs(int i, string &s) {
        if (i == s.size()) {
            ans.push_back(cur);
            return;
        }

        for (int j = i; j < s.size(); j++) {
            if (isPal(s, i, j)) {
                cur.push_back(s.substr(i, j - i + 1));
                dfs(j + 1, s);
                cur.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        dfs(0, s);
        return ans;
    }
};