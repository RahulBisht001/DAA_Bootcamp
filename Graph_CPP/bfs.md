```cpp
class Solution {
  public:
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
       
       vector<int>ans;
       vector<bool>visited(v+1,false);
       
       bfs(adj,ans,0,visited);
       return ans;
    }
    
    void bfs(vector<int>adj[],vector<int>&ans,int s,
    vector<bool>&visited){
    
        queue<int>q;
        visited[s] = true;
        
        q.push(s);
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            ans.push_back(u);
            
            for(int a: adj[u]){
                if(visited[a] == false){
                    q.push(a);
                    visited[a]= true; 
                }
            }
        }
    }
};
```