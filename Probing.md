## Probing in Hashing

In Hash Table ,a probe sequence refers to the sequence of locations or slots that are examined when 
searching for a key or inserting a new key-value pair into the hash table. It determines the order in 
which the hash table is traversed to find an available or matching slot.

When a key is inserted or searched in a hash table, its hash value is computed, and based on that hash 
value, the initial slot or bucket in the hash table is determined. If that slot is already occupied, 
a probe sequence is followed to find the next available slot.

The probe sequence defines the method for resolving collisions in a hash table, which occur when two or 
more keys are mapped to the same slot. There are different approaches to handling collisions, and the 
probe sequence determines how the hash table iterates through the slots to find an empty slot or 
the desired key.



### Commonly used probe sequences include:

## 1. Linear Probing: 

In linear probing, if a collision occurs at a slot, the algorithm linearly probes the next slots one by one until an empty slot is found. The probe sequence is defined as a linear increment of indices (e.g., slot + 1, slot + 2, slot + 3, and so on). This probing method ensures that all slots are eventually checked.

* Advantages :

1. No extra Space required.

* Disadvantages :

1. Search Time (O(N))
2. Deletion Difficult
3. Primary clustering
4. Secondary clustering


## 2. Quadratic Probing: 

In quadratic probing, instead of probing the next slot linearly, the algorithm uses a quadratic function to determine the next slot. The probe sequence is defined as a quadratic increment of indices (e.g., slot + 1^2, slot + 2^2, slot + 3^2, and so on). This technique reduces clustering but may still result in an incomplete search if the table is nearly full.



* Advantages :

1. No Extra Space required
2. Primary Clustering Resoled

* Disadvantages :

1. Searching (O(N))
2. Secondary Clustering remains
3. No Guarantee of finding a slot


## 3. Double Hashing: 

Double hashing involves using a secondary hash function to calculate the offset for probing. The probe sequence is defined by incrementing the slot by the result of the secondary hash function. For example, if the secondary hash function returns 3, the probe sequence would be slot + 3, slot + 6, slot + 9, and so on. Double hashing can provide a more uniform distribution of keys and reduce clustering.


* Advantages :

1. No Extra Space required
2. Primary Clustering Resoled
3. Secondary Clustering Resolved

* Disadvantages :

1. Searching (O(N))

## Clustering in Hashing

In Hashing, clustering refers to the phenomenon where consecutive or nearby slots in a hash table become occupied by keys, resulting in a non-uniform distribution of keys across the table. Clustering can impact the performance of hash table operations by increasing the number of collisions and potentially leading to longer probe sequences.

There are two types of clustering that can occur in a hash table: primary clustering and secondary clustering.

1. Primary Clustering:

Primary clustering occurs when collisions cause consecutive slots to be filled, forming clusters of occupied slots. When a new key is inserted and encounters a collision, it is typically placed in the next available slot in the probe sequence. If the next slot is already occupied, it will probe the subsequent slots until it finds an empty slot. This can lead to primary clusters, where multiple keys are grouped together in adjacent slots. Primary clustering can occur in linear probing and quadratic probing.

Primary clustering can negatively impact the performance of hash table operations. As the number of primary clusters increases, the average probe sequence length grows, leading to slower search, insertion, and deletion operations. Primary clustering is especially problematic when the load factor (the ratio of occupied slots to total slots) approaches 1, as the number of collisions increases.

2. Secondary Clustering:

Secondary clustering, also known as secondary clustering or quadratic probing clustering, occurs when collisions cause keys to be distributed in a non-linear manner within the hash table. In quadratic probing, the probe sequence increment is based on a quadratic function (e.g., slot + 1^2, slot + 2^2, slot + 3^2, and so on). Secondary clustering can occur when the quadratic increment results in keys being placed in the same sequence of slots, forming clusters that are not consecutive but still non-uniformly distributed.

Secondary clustering can also impact the performance of hash table operations. Clusters formed by secondary clustering can result in longer probe sequences and increased collision rates. This can affect the efficiency of search and insertion operations and lead to decreased overall performance.

* To mitigate clustering effects, various techniques can be employed, such as:

- Load Factor Management:

Keeping the load factor of the hash table below a certain threshold helps reduce clustering. By increasing the size of the hash table when it becomes too full, the likelihood of collisions and clustering can be decreased.

- Alternative Probing Methods:

Using probing methods that minimize clustering, such as double hashing or other advanced techniques, can help achieve a more even distribution of keys and reduce the impact of clustering.

- Dynamic Hashing:

Dynamic hashing techniques, such as extendible hashing or linear hashing, dynamically resize the hash table as needed, redistributing keys to avoid clustering and maintaining a balanced distribution.

By addressing clustering, the performance of hash table operations can be improved, leading to faster and more efficient key lookup, insertion, and deletion.