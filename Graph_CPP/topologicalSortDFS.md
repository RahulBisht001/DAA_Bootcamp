* Topological Sort using DFS

```cpp

class Solution {
	public:
	void dfs(vector<int>adj[],int s, stack<int>&st,
	vector<bool>&visited){
	    
	    visited[s] = true;
	    for(auto v: adj[s]){
	        if(!visited[v])
	           dfs(adj,v,st,visited);
	    }
	    st.push(s);
	}
	
	vector<int> topoSort(int v, vector<int> adj[]) {
	  
	  vector<int>ans;
	  stack<int>st;
	  vector<bool>visited(v,false);
	   
	  for(int i=0;i<v;++i){
	      if(!visited[i]){
	          dfs(adj,i,st,visited);
	      }
	  }
	  
	  while(!st.empty()){
	      ans.push_back(st.top());
	      st.pop();
	  }
	  return ans;
	}
};
```