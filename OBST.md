## Optimal Binary Search Tree

An Optimal Binary Search Tree (OBST), also known as a Weighted Binary Search Tree, 
is a binary search tree that minimizes the expected search cost for a given set of 
keys with associated probabilities or frequencies. In an OBST, the keys are arranged 
in such a way that the total cost of searching for a key is minimized.


In a regular Binary Search Tree (BST), the keys are organized in a specific order, typically in ascending or descending order. The tree's structure is based solely on the order of insertion, without considering the probabilities or frequencies associated with each key.

To illustrate the difference, let's consider the example with the given set of keys: 5, 7, 3, 2, 1, 8, 6, 0, 25, 9, 4. Let's assume that we also have the following probabilities or frequencies associated with each key:

Key:   0   1   2   3   4   5   6   7   8   9   25
Prob:  0.1 0.05 0.1 0.05 0.05 0.2 0.1 0.1 0.05 0.1 0.1

We can now construct an OBST using the Dynamic Programming approach, known as the "Optimal Binary Search Tree Algorithm" or "Huffman's Algorithm." The algorithm aims to minimize the weighted average search time by considering the probabilities/frequencies.

The optimal binary search tree for the given example would have the following structure:

        5
       / \
      3   7
     / \   \
    1   4   8
   /       / \
  0       6   25
           \
            9

In this OBST, the keys are arranged in a way that minimizes the expected search cost based on the associated probabilities. For example, the most frequently accessed keys (5, 3, 7) are closer to the root, making them easier to access with fewer comparisons. Keys with lower probabilities, like 0 and 25, are placed deeper in the tree.

In contrast, in a regular binary search tree without considering probabilities, the keys would be organized based on the order of insertion. The resulting tree would not take into account the probabilities/frequencies and may not minimize the expected search cost.

By constructing an optimal binary search tree, we achieve better search performance on average compared to a regular binary search tree, specifically tailored to the probabilities or frequencies of accessing the keys.