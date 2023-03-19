* Time Complexity: O(n+k) 
* Space Complexity	O(max)

* Counting sort is a sorting technique based on keys between a specific range. It works 
by counting the number of objects having distinct key values (a kind of hashing) & Then do 
some arithmetic operations to calculate the position of each object in the output sequence. 

* Yes ! It is Stable Sorting Algorithm.

## Characteristics of counting sort:
1. Counting sort makes assumptions about the data, for example, it assumes that values are going to be in the range of 0 to 10 or 10 – 99, etc, Some other assumption counting sort makes is input data will be all real numbers.
2. Like other algorithms this sorting algorithm is not a comparison-based algorithm, it hashes the value in a temporary count array and uses them for sorting.
3. It uses a temporary array making it a non-In Place algorithm.


## Counting Sort Applications
 
* Counting sort is used when:

1. there are smaller integers with multiple counts.
2. linear complexity is the need.