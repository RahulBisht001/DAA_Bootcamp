* Liner graph with no cycle is always a Bipartite graph
* Graph with even cycle length are also Bipartite.

```cpp

class Solution {
    private: 
    bool check(int start,int v,vector<int>adj[],int color[]){
        
	    queue<int>q;
	    q.push(start);
	    color[start] = 0;
	    
	    while(!q.empty()){
	        
	        int u = q.front();
	        q.pop();
	        for(auto x:adj[u]){
	            if(color[x]== -1){
	                color[x] = 1-color[u];
	                q.push(x);
	            }
	            else if(color[x] == color[u]){
	               return false; 
	            }
	        }
	    }
	    return true;
    }
    
public:
	bool isBipartite(int v, vector<int>adj[]){
	    
	    int color[v];
	    for(int i=0;i<v;++i)
	        color[i] = -1;
	    
	    for(int i=0;i<v;++i){
	        if(color[i] == -1)
	          if(check(i,v,adj,color)== false){
	              return false;
	          }
	    }
	    return true;
	}
};

```