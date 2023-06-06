check whether path exist or not

```cpp
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, 
    int des) {
        
        unordered_map<int,vector<int>>umap;
        for(auto x:edges){
            vector<int>temp =x;
            int u= temp[0];
            int v= temp[1];

            umap[u].push_back(v);
            umap[v].push_back(u);
        }

        queue<int>q ;
        q.push(source);

        vector<bool>visited(n+1,false);
        visited[source] = true;

        while(!q.empty()){
            int v = q.front();
            q.pop();

            for(auto x: umap[v]){
                if(visited[x]== false){
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
        return visited[des];
    }
};
```