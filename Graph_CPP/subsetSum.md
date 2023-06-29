```cpp
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){    
        // The value of subset[i][j] will be true if
    // there is a subset of arr[0..j-1] with sum
    // equal to i
    int N = arr.size();
    vector<vector<bool>> subset(N+1, vector<bool>(sum+1));
    // If sum is 0, then answer is true
    for (int i = 0; i <= N; i++)
        subset[i][0] = true;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
 
    // Fill the subset table in bottom up manner
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < arr[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= arr[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - arr[i - 1]];
        }
    }
 
    
 
    return subset[N][sum];
    }
};
```