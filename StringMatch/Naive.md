
### Naive Method Pseudo code

```
function NaiveStringMatch(text, pattern):
    n = length(text)
    m = length(pattern)
    
    for i from 0 to n - m:
        j = 0
        while j < m and text[i + j] = pattern[j]:
            j = j + 1
        
        if j = m:
            return i  // Pattern found at index i
    
    return -1  // Pattern not found
```