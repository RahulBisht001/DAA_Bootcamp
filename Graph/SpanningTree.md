## Spanning tree

A spanning tree is a sub-graph of an undirected connected graph, which includes all the vertices of the
graph with a minimum possible number of edges. If a vertex is missed, then it is not a spanning tree.

The total number of spanning trees with  `n` vertices that can be created 
from a complete graph is equal to `n(n-2)`.


* Graph should be Connected :

### Properties of spanning-tree

Some of the properties of the spanning tree are given as follows -

1. There can be more than one spanning tree of a connected graph G.
2. A spanning tree does not have any cycles or loop.
3. A spanning tree is minimally connected, so removing one edge from the tree will make the graph disconnected.
4. A spanning tree is maximally acyclic, so adding one edge to the tree will create a loop.
5. There can be a maximum `n^n-2` number of spanning trees that can be created from a complete graph.
6. A spanning tree has n-1 edges, where 'n' is the number of nodes.
7. If the graph is a complete graph, then the spanning tree can be constructed by removing maximum (e-n+1) edges, where 'e' is the number of edges and 'n' is the number of vertices.


#### Applications of the spanning tree

Basically, a spanning tree is used to find a minimum path to connect all nodes of the graph. 
Some of the common applications of the spanning tree are listed as follows -

* Cluster Analysis
* Civil network planning
* Computer network routing protocol



## Minimum Spanning Tree 

A minimum spanning tree can be defined as the spanning tree in which the sum of the weights of 
the edge is minimum. The weight of the spanning tree is the sum of the weights given to the edges 
of the spanning tree. In the real world, this weight can be considered as the distance, traffic 
load, congestion, or any random value.

#### Minimum Spanning tree Applications

1. To find paths in the map
2. To design networks like telecommunication networks, water supply networks, and electrical grids.