## Hashing Data Structure - Introduction to Hashing


### Hashing 

Hashing is the process of converting a given key into another value. A hash function is used 
to generate the new value according to a mathematical algorithm. The result of a hash function 
is known as a hash value or simply, a hash.

A good hash function uses a one-way hashing algorithm, or in other words, the hash cannot be converted back into the original key.

Hashing is a technique used in computer science to efficiently map data to a fixed-size array, called a hash table or hash map. The hash value is then used as an index to store or retrieve the corresponding data in the hash table.

The primary purpose of hashing is to provide fast access to data. It offers constant-time average-case complexity for insertion, deletion, and retrieval operations, making it ideal for scenarios where quick data lookup is required.


#### Why do we need hashing ?

1. Fast Data Retrieval: 

Hashing allows for efficient data retrieval based on keys. Instead of searching through all elements, the hash function provides an index directly, leading to faster access times.

2. Data Organization: 

Hashing provides a structured way to organize data. It maps the data elements into a fixed-size hash table, distributing them across different indices based on their hash values.

3. Unique Identification:

Hashing enables the generation of unique hash codes for data elements. This property is 
used in various applications like data integrity checks, data comparisons, and cryptographic algorithms.

### What is Hash Function ?

A hash function is a mathematical function / algorithm that takes an input (or "key") and produces
a fixed-size output, typically a hash code or hash value. The purpose of a hash function is to efficiently map data of arbitrary size to a fixed-size value.

The key characteristics of a hash function are as follows:

1. Deterministic: 

A hash function should always produce the same hash value for the same input. Given the same input, the output of the hash function should be consistent.

2. Fixed Output Size:

A hash function generates a hash value of a fixed size, regardless of the input size. For example, a hash function may produce a 32-bit or 64-bit hash value.

3. Uniform Distribution:

An ideal hash function aims to produce hash values that are uniformly distributed across the entire range of possible hash values. This helps minimize collisions, where multiple inputs produce the same hash value.

4. Efficiency:

Hash functions should be computationally efficient, allowing for quick calculation of hash values. Ideally, the time complexity of a hash function should be constant or close to constant.

5. Avalanche Effect: 

A small change in the input should result in a significant change in the hash value. This property ensures that even a slight variation in the input produces a drastically different hash value, enhancing the security and uniqueness of the hash function.


### Importance of the Hashing Function:

The hashing function plays a crucial role in the effectiveness of hashing. It converts the
input data into a hash code, which determines the index in the hash table where the data 
will be stored or retrieved. The key importance of a hashing function includes:

1. Uniform Distribution:

An ideal hashing function produces hash values that are uniformly distributed across the hash table. This helps to minimize collisions, where multiple data elements produce the same hash code.

2. Unique Hash Codes:

The hashing function should generate unique hash codes for distinct input data, ensuring that each element is stored in a unique location in the hash table. This property is essential for proper data retrieval.

3. Efficiency:

The hashing function should be computationally efficient to calculate the hash code quickly. Ideally, it should have a constant time complexity to ensure efficient hashing operations.

Example:
Consider a scenario where we want to store a list of employee records in a hash table based on their unique employee IDs. We can use a hashing function that takes the employee ID as input and produces a hash code. The hash code is then used as an index to store the employee record in the hash table.

For instance, if we have an employee with ID 123456, the hashing function can generate a hash code of 3. Using this hash code as the index, we can store the employee record at index 3 in the hash table. Similarly, when we want to retrieve the record for employee ID 123456, the hashing function will produce the same hash code of 3, allowing us to quickly locate the employee record at index 3.

The hashing function ensures that the employee records are efficiently organized and easily accessible based on their unique employee IDs. It enables fast data retrieval without the need to search through all elements, resulting in improved efficiency and performance.


###  Collision :

Collision in hashing occurs when two or more different inputs produce the same hash value or hash code. In other words, it is a situation where multiple keys are mapped to the same index or slot in a hash table.

Collisions can occur due to various reasons, including:

1. Hash Function Limitations: 

Hash functions have a fixed output size, and when the number of possible input values exceeds the number of possible hash values, collisions become inevitable.

2. Input Variations: 

Similarities or patterns in the input data can lead to collisions. Even small differences in input can result in the same hash value, especially if the hash function is not designed to exhibit the avalanche effect.

3. Limited Hash Table Size:

If the hash table is not large enough to accommodate all possible input values without collisions, collisions are likely to occur.


#### Handling Collisions:

Collisions are expected in hashing, and various techniques are used to handle them. The most common approaches include:

1. Chaining:

In chaining, each slot in the hash table contains a linked list or another data structure. When a collision occurs, the colliding elements are stored in the same slot, forming a chain. During retrieval, the chain is traversed to find the desired element. Chaining is simple to implement and handles collisions effectively, but it may introduce additional memory overhead.

2. Open Addressing:

In open addressing, all elements are stored in the hash table itself, and if a collision occurs,
an alternative slot is found within the table to store the colliding element. Common open 
addressing techniques include linear probing (checking the next available slot sequentially), quadratic probing (using a quadratic function to probe slots), and double hashing (using a second hash function to determine the next slot). Open addressing requires careful handling of the 
probing sequence to avoid clustering and ensure efficient retrieval.

3. Robin Hood Hashing:

Robin Hood hashing is a variation of open addressing that aims to minimize the variance of 
probe lengths. When a collision occurs, the element is placed in the slot that is closer to 
the ideal or expected position. During retrieval, elements are searched by comparing the 
distance from the ideal position, giving priority to elements with shorter probe lengths.

4. Cuckoo Hashing:

Cuckoo hashing is another open addressing technique that uses two or more hash functions and multiple hash tables. When a collision occurs, the colliding element is evicted and placed 
in an alternate hash table using one of the other hash functions. This process continues 
until all elements find a suitable place or a maximum number of relocations is reached.

These collision handling techniques aim to minimize the impact of collisions on the efficiency 
and performance of hash tables. The choice of technique depends on factors like the expected 
load factor, the desired retrieval time, and the characteristics of the data being hashed.




