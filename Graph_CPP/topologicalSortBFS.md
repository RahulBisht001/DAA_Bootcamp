* Topological sort using BFS

```cpp

class Solution {
	public:
	vector<int> topoSort(int v, vector<int> adj[]) {
	  
	  vector<int>ans;
	  queue<int>q;
	  vector<int>indegree(v,0);
	  
	  for(int i=0;i < v;++i){
	      vector<int>data = adj[i];
	      for(auto x: data){
	          indegree[x]++;
	      }
	  }
	  
	  for(int i=0;i <v;++i){
	      if(indegree[i] == 0)
	           q.push(i);
	  }
	  
	  while(!q.empty()){
	      int u = q.front();
	      q.pop();
	      
	      ans.push_back(u);
	      
	      for(auto x: adj[u]){
	          indegree[x]--;
	          if(indegree[x] == 0)
	              q.push(x);
	      }
	  }
      
	  return ans;
	}
};
```