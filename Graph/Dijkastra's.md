## dijkstra's Algorithm

Dijkstra's algorithm allows us to find the shortest path between any two vertices of a graph.

It differs from the minimum spanning tree because the shortest distance between two vertices might not include all the vertices of the graph.

Dijkstra algorithm is one of the prominent algorithms to find the shortest path from the source node to a destination node. It uses the greedy approach to find the shortest path. The concept of the Dijkstra algorithm is to find the shortest distance (path) starting from the source point and to ignore the longer distances while doing an update.

### Relaxation 

if d(u) + c(u,v) < d(v)
then d(v) = d(u) + c(u,v)

### Dijkstra Algorithm Steps

Step1: All nodes should be marked as unvisited.

Step2: All the nodes must be initialized with the "infinite" (a big number) distance. The starting node must be initialized with zero.

Step3: Mark starting node as the current node.

Step4: From the current node, analyze all of its neighbors that are not visited yet, and compute their distances by adding the weight of the edge, which establishes the connection between the current node and neighbor node to the current distance of the current node.

Step5: Now, compare the recently computed distance with the distance allotted to the neighboring node, and treat it as the current distance of the neighboring node,

Step6: After that, the surrounding neighbors of the current node, which has not been visited, are considered, and the current nodes are marked as visited.

Step7: When the ending node is marked as visited, then the algorithm has done its job; otherwise,

Step8: Pick the unvisited node which has been allotted the minimum distance and treat it as the new current node. After that, start again from step4.


### Limitations of Dijkstra Algorithm
The following are some limitations of the Dijkstra Algorithm:

The Dijkstra algorithm does not work when an edge has negative values.
For cyclic graphs, the algorithm does not evaluate the shortest path. Hence, 
for the cyclic graphs, it is not recommended to use the Dijkstra Algorithm.


### Usages of Dijkstra Algorithm
A few prominent usages of the Dijkstra algorithm are:

The algorithm is used by Google maps.
The algorithm is used to find the distance between two locations.
In IP routing also, this algorithm is used to discover the shortest path.
The algorithm uses a greedy approach in the sense that we find the next best solution 
hoping that the end result is the best solution for the whole problem.
