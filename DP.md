## Dynamic Programming

Dynamic Programming (DP) is a technique used in computer science and mathematics to solve optimization problems by breaking them down into overlapping sub problems and solving them 
in a bottom-up or top-down manner to avoid redundant computations. DP is particularly useful
when the problem exhibits two key properties: 

`overlapping substructure and optimal substructure`


#### 1. Overlapping substructure property:

This property implies that the problem can be divided into smaller, overlapping sub problems. The solutions to these sub problems can be reused multiple times, rather than recomputed independently. By storing and reusing the solutions to sub problems, the overall computation time can be significantly reduced.

#### 2. Optimal substructure property: 

This property states that the optimal solution to a problem can be constructed from the optimal solutions of its sub problems. In other words, the optimal solution to the larger problem can be determined by combining the optimal solutions of smaller sub problems. This property allows DP to find the global optimum by recursively solving and combining the optimal solutions of the sub problems.


### Types of Dynamic Programming:

#### 1. Top-down (Memoization):

Top-down DP involves breaking down the main problem into smaller sub problems and solving them recursively. It uses memoization, which means storing the results of each subproblem in a data structure (e.g., an array or a hash table) to avoid redundant calculations. When a subproblem needs to be solved, the stored result is retrieved, eliminating the need for recomputation. This approach is also known as memoization because it "memorizes" the results of sub problems.


#### 2. Bottom-up (Tabulation):

Bottom-up DP, also known as tabulation, involves solving the sub problems iteratively, starting from the smallest sub problems and building up to the main problem. It typically uses a table or array to store the results of sub problems. The results are computed in a systematic order, ensuring that the necessary sub problems have already been solved before solving the current subproblem. This approach avoids recursion and can be more efficient in terms of memory usage and function call overhead.


#### Conditions for Applying DP:

1. Overlapping sub problems: The problem should be decomposable into smaller overlapping sub problems.
2. Optimal substructure: The optimal solution to the problem can be constructed from the optimal solutions of its sub problems.
3. Memoization or tabulation: DP can be applied using either the top-down memoization approach or the bottom-up tabulation approach, depending on the problem's characteristics and requirements.

#### Tabulation vs. Memoization:

Tabulation and memoization are two different approaches used in DP to solve problems.

Tabulation involves solving the sub problems iteratively, starting from the smallest sub problems and building up to the main problem. The results of sub problems are stored in a table or array. Tabulation eliminates recursion and ensures that all necessary sub problems are solved before solving the current subproblem. It is generally more efficient in terms of memory usage and function call overhead.

Memoization, on the other hand, involves solving the sub problems recursively and storing the results in a data structure (e.g., an array or hash table) to avoid redundant calculations. When a subproblem needs to be solved, the stored result is retrieved instead of recomputing it. Memoization can be more intuitive and easier to implement compared to tabulation, but it may introduce some overhead due to function calls and the use of additional data structures.

In summary, both tabulation and memoization are techniques used in DP to solve optimization problems efficiently. The choice between them depends on the problem's characteristics, programming language, performance requirements, and personal preference.