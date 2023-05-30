## String Matching Algorithms
_____________________________

1. Naive Method
2. Robin-Karp Algorithm 
    :  Sliding , called as Rolling hash function
    : Average complexity: O(n-m+1)

drawback :> Spurious hits
and in such situation the worst complexity goes up tp O(n*m)

The main reasons for these spurious hits was taking ascii codes or even more simple 
code as hash function.

* Proposed idea by Robin karp :
the idea was using the positions of characters as their power.(English Alphabet)

```math

"DBA" --> 4*10^2 + 2*10^1 + 1*10^0 ... and goes on

you can select any number as base . 


```
Robin Finger Function



3. KMP Algorithm