## BellmanFord Algorithm

In dynamic programming, there are many algorithms to find the shortest path in a graph. 
Some of them are Dijkstra's algorithm, BFS, DFS, Floyd, all-pair shortest path problem, and bidirectional algorithm. The most commonly used algorithm is Dijkstra's algorithm. The limitation 
of the algorithm is that it cannot be applied if the graph has negative edge weights. Another difference is that the Dijkstra algorithm looks only to the immediate neighbors of a vertex, Bellman-Ford goes through each edge in every iteration.


To overcome this problem, the Bellman-Ford algorithm can be applied. It deals with the negative 
edge weights. In this section, we will understand the Bellman-Ford algorithm with example and 
also implement the Bellman ford algorithm in a Java program.

### Bellman-Ford Algorithm

It is a single-source shortest path (minimum weight) algorithm very similar to Dijkstra's algorithm. It can be applied in a graph if we want to find the shortest path. Note that it deals with the negative edge weights. The limitation of the algorithm is that there should not be negative cycles (a cycle whose sum of edges produces a negative value) in the graph. Consider the following graph with cycle.

### Time Complexity
The runtime complexity of the algorithm is O(v*e) and space complexity is O(v). One should use 
the algorithm if the graph has negative edge weights. Therefore, the Bellman-Ford algorithm can be applied in the following situations:

Negative Edge Weights
Positive Edge Weights > 1
Undirected Cycles
The algorithm is slower than Dijkstra's algorithm when all arcs are negative.

### Working of The Bellman-Ford Algorithm

The working of the Bellman-Ford algorithm is the same as Dijkstra's algorithm. The only difference is that it does not use the priority queue. It repetitively loops over all the edges and updates 
the distances at the start node, the same as in Dijkstra's algorithm.

If a graph G=(V, E) contains a negative weight cycle, then some shortest paths may not exist. Bellman-Ford algorithm finds all shortest path lengths from a source s ϵ V to all v ϵ V or determines that a negative weight cycle exists.

Given a weighted directed graph G(V, E) with source (s) and weight function w: E -> R, the algorithm returns a boolean value TRUE if and only if the graph contains no negative-weight cycles that are reachable from the source. The algorithm produces the shortest path and its weights. If there is such a cycle, the algorithm indicates that no solution exists.

### Algorithm

INITIALIZE-SINGLE-SOURCE (G, s)  
for i <- 1 to |V[G]|-1  
do for each edge (U, V) ϵ E[G]  
do RELAX (U, V, W)  
for each edge (U, V) ϵ E[G]  
do if d[V] > d[U] + w (U, V)  
then return FALSE  
return TRUE  


### Bellman Ford Pseudo Code

```arduino
BellmanFord (G, V, E, S)  
Step 1:  
for each vertex v ϵ G do  
dist[v] = ∞  
dist[source] = 0  
  
Step 2:  
Relax (u, v, w)  
for i = 1 to |v|-1  
           for each edge (u, v) ϵ G do  
           (dist[v] > dist[u]+w(u, v))  
           (dist[v] <- dist[u]+w(u, v))  
Step 3:  
for each edge (u, v) ϵ G  
if (dist[u]+w(u, v)< dist[v])  
return "Graph contains negative weight cycle"  
return distance  
```