class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());

        vector<vector<string>> ans;
        string prefix;

        for (char c : searchWord) {
            prefix += c;

            auto start = lower_bound(products.begin(), products.end(), prefix);
            vector<string> curr;

            for (auto it = start; it != products.end() && curr.size() < 3; ++it) {
                if (it->compare(0, prefix.size(), prefix) == 0)
                    curr.push_back(*it);
                else
                    break;
            }

            ans.push_back(curr);
        }

        return ans;
    }
};