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

Tabulation and memoization are two different approaches used in dynamic programming (DP) to solve problems. Let's compare them on various points:

1. Implementation: 

   - Tabulation: 
   
   In tabulation, the sub problems are solved iteratively, and the results are stored in a table or array. The solution is built up in a bottom-up manner, starting from the smallest sub problems and progressing towards the main problem.

   - Memoization: 

   In memoization, the sub problems are solved recursively, and the results are stored in a data structure (e.g., an array or hash table). The results are retrieved from the data structure whenever a subproblem needs to be solved, avoiding redundant calculations.

2. Computation Order:

   - Tabulation: 
   
   Tabulation computes the solutions to sub problems in a systematic order, ensuring that all necessary sub problems are solved before solving the current subproblem. It follows a deterministic order defined by the problem's structure.

   - Memoization: 
   
   Memoization computes the solutions to sub problems on-demand, based on the recursive calls made during the computation. It doesn't follow a specific order defined by the problem's structure.

3. Space Complexity:

   - Tabulation:
   
    Tabulation typically requires a table or array to store the results of sub problems. The space complexity depends on the number of sub problems and the size of the table. In some cases, it may be possible to optimize the space usage by using only a portion of the table.

   - Memoization: 
   
   Memoization requires a data structure (e.g., an array or hash table) to store the results of sub problems. The space complexity depends on the number of sub problems that are memoized. It can be more memory-efficient than tabulation if only a subset of sub problems is actually needed.

4. Time Complexity:

   - Tabulation: 
   
   The time complexity of tabulation depends on the number of sub problems and the time required to solve each subproblem. It typically involves a loop that iterates over the sub problems, so the time complexity is often proportional to the number of sub problems multiplied by the time complexity of solving each subproblem.

   - Memoization: 
   
   The time complexity of memoization depends on the number of unique sub problems encountered during the computation. It avoids redundant calculations by retrieving the results from the data structure, which can lead to better time complexity than tabulation in some cases.

5. Flexibility:
   - Tabulation: Tabulation provides a systematic and deterministic approach to solve sub problems. It is generally more suited for problems where the computation order is well-defined and can be determined in advance.
   - Memoization: Memoization is more flexible as it can handle problems with complex computation orders, recursive structures, or problems where the optimal solution may not follow a specific order. It allows for a more intuitive and natural expression of the problem's recursive nature.

6. Function Call Overhead:
   - Tabulation: Tabulation eliminates the need for recursive function calls, resulting in lower function call overhead. It is particularly beneficial in languages with expensive function call operations.
   - Memoization: Memoization involves recursive function calls, which may introduce additional overhead due to the function call stack. However, modern programming languages often optimize function calls, reducing the impact of this overhead.

In summary, tabulation and memoization are both powerful techniques in dynamic programming, and their choice depends on the problem's characteristics, programming language, performance requirements, and personal preference. Tabulation offers a systematic approach with better control over computation order and lower function call overhead, while memoization provides flexibility and can handle more complex problem structures with potentially better space complexity.