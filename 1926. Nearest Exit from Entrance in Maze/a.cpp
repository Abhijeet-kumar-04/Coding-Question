class Solution {
public:
    vector<vector<int>>visited;
    int n ,m;
    vector<vector<int>> dir ={{1,0},{0,1},{-1,0},{0,-1}};
    int helper(vector<vector<char>>& maze,int row,int col){
        queue<pair<int,int>>qu;
        qu.push({row,col});
        int dis=0;
        while(qu.size()){
            int len = qu.size();
            for(int i =0;i<len;i++){
                auto top = qu.front();
                qu.pop();
                int row1 = top.first;
                int col1 = top.second;
                for(int d =0;d<4 ;d++){
                    int a = row1 + dir[d][0];
                    int b = col1 + dir[d][1];
                    if(a < 0 || a >= n || b < 0 || b >= m)  continue;
                    if(visited[a][b] || maze[a][b] == '+')  continue;
                    if(a == 0 || a == n-1 || b == 0 || b == m-1)return dis + 1;
                    visited[a][b] = true;
                    qu.push({a,b});
                }
            }
            
            dis++;
        }
        return -1;
    }
    


    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        n = maze.size();
        m = maze[0].size();
        visited.resize(n,vector<int>(m,false));
        visited[entrance[0]][entrance[1]]=true;
        return helper(maze,entrance[0],entrance[1]);
    }
};