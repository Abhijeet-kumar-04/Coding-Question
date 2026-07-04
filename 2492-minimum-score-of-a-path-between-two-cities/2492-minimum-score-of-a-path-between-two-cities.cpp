class Solution {
public:

    vector<list< pair<int,int> >>graph;
    vector<bool>visited;
    void bfs(int node,int& ans){
        for(auto ele : graph[node]){
            int node1 = ele.first;
            int weight = ele.second;
            ans = min(ans,weight);
            if(visited[node1]) continue;
            visited[node1]=true;
            
            bfs(node1,ans);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        graph.resize(n+1,list<pair<int,int>>());
        visited.resize(n+1,false);
        int m = roads.size();
        for(int i =0;i<m;i++){
            graph[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            graph[roads[i][1]].push_back({roads[i][0], roads[i][2]});
        }
        int ans = INT_MAX;
        visited[1]=true;
        bfs(1,ans);
        return ans;


    }
};