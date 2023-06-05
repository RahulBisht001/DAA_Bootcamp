* Detect cycle in an Undirected graph 
```cpp

class Solution {
  public:
    bool isCycle(int v, vector<int> adj[]) {
      
        vector<bool>visited(v+1,false);
        for(int i=0;i<v;++i){
            if(visited[i] == false){
                if(dfs(adj,i,visited,-1))
                    return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<int>adj[],int s,vector<bool>& visited,int parent){
       
       visited[s] = true;
       
        for(int a: adj[s]){
            if(visited[a] == false){
                if(dfs(adj,a,visited,s))
                    return true;
            }
            else if(a != parent){
                return  true;
            }
        }
        return false;
    }
};

```