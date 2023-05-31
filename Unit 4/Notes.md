## Unit 4

### Tabulation Vs memoization
Tabulation and memoization are two techniques used in dynamic programming to solve problems by breaking them down into smaller sub problems and reusing the results of those sub problems to solve the overall problem more efficiently. Both techniques aim to optimize the time complexity of the solution, but they differ in their approach.

1. Tabulation:

Tabulation is a bottom-up approach where the solutions to the sub problems are computed iteratively and stored in a table or an array. The idea is to solve the sub problems in a specific order, usually starting from the smallest sub problems and gradually building up to the larger ones until the final solution is obtained.

Advantages of tabulation:

- It guarantees that all required sub problems are solved.
- It avoids the overhead of function calls, which can be significant in some programming languages.
- It is easy to understand and implement.

Disadvantages of tabulation:

- It may require more space to store the table, especially if the problem has a large number of sub Problems.
- It may compute and store values for sub Problems that are never actually used in the final solution.



2. Memoization:

Memoization is a top-down approach where the solutions to the sub Problems are computed recursively, but the results are memoized or cached to avoid redundant computation. When a subproblem needs to be solved, the algorithm first checks if the solution is already available in the cache. If it is, the cached value is returned; otherwise, the subproblem is solved recursively and the result is stored in the cache for future use.

Advantages of memoization:

- It avoids redundant computation by reusing previously computed results.
- It can save space by only storing results for the sub Problems that are actually needed.
- It is often easier to implement than tabulation for problems that naturally lend themselves to recursion.

Disadvantages of memoization:

- It may have a higher overhead due to the recursion and function call stack.
- It may suffer from stack overflow errors if the recursion depth becomes too large.
- It may require careful handling of the cache to ensure thread-safety in concurrent environments.



In summary, tabulation and memoization are two different approaches to solving problems using dynamic programming. Tabulation is a bottom-up approach that solves sub Problems iteratively and stores their results in a table, while memoization is a top-down approach that solves sub Problems recursively and caches their results to avoid redundant computation. The choice between the two techniques depends on the problem at hand and the trade-offs between time complexity, space complexity, and implementation complexity.