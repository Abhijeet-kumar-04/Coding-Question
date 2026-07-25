class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        int left = 0 ;
        int right = m-1;
        int up = 0;
        int down = n-1;
        while(left<=right and up<=down){
            
            for( int i = left ; i<= right;i++){
                ans.push_back(mat[up][i]);
            }
            up++;
            
            for(int i = up ; i<= down ; i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            
            if (up <= down) {
                for( int i = right ; i>=left;i--){
                    ans.push_back(mat[down][i]);
                }
                down--;
            }
            
            if (left <= right) {
                for(int i = down ; i >= up ; i--){
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};