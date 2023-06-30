## Hashing Data Structure - Introduction to Hashing

### Introduction:
Hashing is a technique used in computer science to efficiently store and retrieve 
data in constant time. It is a data structure that uses a hash function to map data elements 
to specific indices, allowing for quick access and retrieval. In this explanation, we will discuss the key concepts of hashing, including hash functions, collisions, and collision handling techniques.


#### 1. Hash Function:

A hash function is a mathematical function that takes an input (data element) and returns a fixed-size string of characters called a hash value or hash code. The primary purpose of a hash function is to map data elements to specific indices of an array, which acts as the underlying storage for the hash table. A good hash function should produce a unique hash value for each unique input and distribute the values uniformly across the array.

Example:
Let's consider a simple hash function that computes the sum of ASCII values of characters in a string and takes the modulo operation with the size of the array.

```c
int hashFunction(char* key, int arraySize) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        sum += key[i];
    }
    return sum % arraySize;
}
```

#### 2. Collision:

Collision occurs when two or more data elements are mapped to the same index in the hash table. Since the size of the array is typically smaller than the number of possible inputs, collisions are inevitable. Dealing with collisions is an essential aspect of hashing.

#### 3. Collision Handling Techniques:

a. Chaining:

Chaining is a collision handling technique where each index of the hash table contains a 
linked list. Whenever a collision occurs, the new data element is appended to the linked list 
at the corresponding index.

Example:
Let's consider a simple implementation of a hash table using chaining in C language:

```c
#define ARRAY_SIZE 10

typedef struct Node {
    char* key;
    int value;
    struct Node* next;
} Node;

Node* hashTable[ARRAY_SIZE];

void insert(char* key, int value) {
    int index = hashFunction(key, ARRAY_SIZE);
    Node* newNode = malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        Node* curr = hashTable[index];
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}
```

b. Open Addressing:

Open addressing is another collision handling technique where the colliding data elements are 
stored in alternative locations within the hash table itself. When a collision occurs, the 
algorithm probes for an empty slot by applying a specific sequence of steps (e.g., linear probing, quadratic probing, or double hashing).

Example:
Here's an example of implementing a hash table using open addressing with linear probing in C language:

```c
#define ARRAY_SIZE 10

typedef struct {
    char* key;
    int value;
} Entry;

Entry hashTable[ARRAY_SIZE];

void insert(char* key, int value) {
    int index = hashFunction(key, ARRAY_SIZE);
    int i = index;
    int step = 1;
    while (hashTable[i].key != NULL) {
        i = (index + step) % ARRAY_SIZE;
        step++;
    }
    hashTable[i].key = key;
    hashTable[i].value = value;
}
```

#### Conclusion:

Hashing is a powerful technique for efficient data storage and retrieval. Understanding the 
concepts of hash functions, collisions, and collision handling techniques such as chaining and 
open addressing is crucial for building efficient hash tables. Remember that the choice of hash function and collision handling technique can significantly impact the performance of the 
hashing data structure.