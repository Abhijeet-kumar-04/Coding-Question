class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
         int n = mat.size();
        int m = mat[0].size();
        bool flagrow = false;
        bool flagcol = false;
        for(int i = 0 ; i< n ;i++){
            for(int j = 0 ; j< m ;j++){
                if(i ==0 && mat[i][j]==0) flagrow = true;
                if(j ==0 && mat[i][j]==0) flagcol = true;
                if( mat[i][j]==0) {mat[0][j]=0;mat[i][0]=0;}
            }
        }
        
        for( int j = 1 ; j<m;j++){
            if( mat[0][j]==0){
                for(int i = 1 ; i < n;i++){
                    mat[i][j]=0;
                }
            }
        }
        
        for( int i = 1 ; i<n;i++){
            if( mat[i][0]==0){
                for(int j = 1 ; j < m;j++){
                    mat[i][j]=0;
                }
            }
        }
        if( flagrow){
            for( int j = 0 ; j<m;j++){
                mat[0][j]=0;
            }
        }
         if(flagcol){
            for( int i = 0 ; i<n;i++){
                mat[i][0]=0;
            }
        }
    }
};