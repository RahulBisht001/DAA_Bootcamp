## Prim's Algorithm

Prim's Algorithm is a greedy algorithm that is used to find the minimum spanning tree from a graph. Prim's algorithm finds the subset of edges that includes every vertex of the graph such that the sum of the weights of the edges can be minimized.

Prim's algorithm starts with the single node and explores all the adjacent nodes with all the connecting edges at every step. The edges with the minimal weights causing no cycles in the graph got selected.

### Algorithm

Step 1: Select a starting vertex  
Step 2: Repeat Steps 3 and 4 until there are fringe vertices  
Step 3: Select an edge 'e' connecting the tree vertex and fringe vertex that has minimum weight  
Step 4: Add the selected edge and the vertex to the minimum spanning tree T  
[END OF LOOP]  
Step 5: EXIT  

### How does the prim's algorithm work?

Prim's algorithm is a greedy algorithm that starts from one vertex and continue to add the edges with the smallest weight until the goal is reached. The steps to implement the prim's algorithm are given as follows -

First, we have to initialize an MST with the randomly chosen vertex.
Now, we have to find all the edges that connect the tree in the above step with the new vertices. From the edges found, select the minimum edge and add it to the tree.
Repeat step 2 until the minimum spanning tree is formed.

### Time Complexity

Data structure used for the minimum edge weight	Time Complexity -

Adjacency matrix, linear searching	 : O(|V|2)
Adjacency list and binary heap	: O(|E| log |V|)
Adjacency list and Fibonacci heap	: O(|E|+ |V| log |V|)


### The applications of prim's algorithm are -

1. Prim's algorithm can be used in network designing.
2. It can be used to make network cycles.
3. It can also be used to lay down electrical wiring cables.