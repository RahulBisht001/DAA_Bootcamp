Detect cycle in a Directed graph

```

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
       
       vector<bool>visited(v+1,false);
       vector<bool>curVisited(v+1,false);
       
        for(int i=0;i<v;++i){
           if(visited[i]== false)
            if(dfsCycle(visited,curVisited,adj,i)){
                return true;
            } 
        }
        return false;
    }
    
    bool dfsCycle(vector<bool>&visited, 
    vector<bool>&curVisited,vector<int>adj[],int s){
        
        visited[s]= true;
        curVisited[s]= true;
        
        for(auto x: adj[s]){
            if(!visited[x]){
                if(dfsCycle(visited,curVisited,adj,x))
                   return true;
            }
            else if(visited[x]== true && curVisited[x]== true)
                return true;
        }
        curVisited[s]= false;
        return false;
    }
};

```