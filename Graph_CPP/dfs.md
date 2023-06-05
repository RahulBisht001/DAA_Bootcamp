* This is cpp solution in geeksforgeeks way
* where the implementation is already done and 
* you just need to do the actual stuff

```cpp
class Solution {
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<bool> visited(V+1,false);
        vector<int> ans;
        
        // Use this when you are not considering the disconnected part 
        dfs(adj,visited,0,ans);

        // Use this when you have to consider disconnected graph as well
        /*
        for(int i=0;i <V;++i){
            if(visited[i] == false){
                dfs(adj,visited,i,ans);
            }
        }
        */
        return ans;
    }
    
    void dfs(vector<int>adj[],vector<bool>&visited,int s,vector<int>& ans){
        
        visited[s] = true;
        ans.push_back(s);
        // cout<<s<<endl;
        for(auto a:adj[s]){
            if(visited[a] == false)
                dfs(adj,visited,a,ans);
        }
    }
};
```


