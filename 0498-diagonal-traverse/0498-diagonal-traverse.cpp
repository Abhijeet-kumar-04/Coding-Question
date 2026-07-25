class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int , vector<int>> mp;
        int n = mat.size();
        int m = mat[0].size();
        for( int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < m ; j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        int i =0;
        vector<int>ans;
        for(auto ele : mp ){
            auto v = ele.second;
            if(i% 2 != 0){
                for(int i =0 ; i< v.size();i++){
                    ans.push_back(v[i]);
                }
            }
            else{
                for(int i = v.size()-1;i>=0;i--){
                    ans.push_back(v[i]);
                }
            }
            i++;
        }
        return ans;
    }
};