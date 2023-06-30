### Robin Karp Pseudo Code

`Rabin-Karp algorithm` is an algorithm used for searching/matching patterns in the text using a 
hash function. Unlike Naive string matching algorithm, it does not travel through every character 
in the initial phase rather it filters the characters that do not match and then performs the comparison.

* Limitations of Rabin-Karp Algorithm

1. Spurious Hit :

When the hash value of the pattern matches with the hash value of a window of the text but the 
window is not the actual pattern then it is called a spurious hit.Spurious hit increases the time 
complexity of the algorithm. In order to minimize spurious hit, we use modulus. It greatly reduces 
the spurious hit.


* Proposed idea by Robin karp :
the idea was using the positions of characters as their power.(English Alphabet)

```math

"DBA" --> 4*10^2 + 2*10^1 + 1*10^0 ... and goes on

you can select any number as base . 


```
Robin Finger Function

```arduino
function RabinKarpStringMatch(text, pattern, prime):
    n = length(text)
    m = length(pattern)
    h = pow(prime, m-1) % prime  // Hash factor
    
    patternHash = 0
    textHash = 0
    
    // Calculate the initial hash values
    for i from 0 to m-1:
        patternHash = (prime * patternHash + pattern[i]) % prime
        textHash = (prime * textHash + text[i]) % prime
    
    // Slide the pattern over the text and check for matches
    for i from 0 to n - m:
        if patternHash = textHash:
            // Perform a full string comparison to avoid false positives
            j = 0
            while j < m and text[i + j] = pattern[j]:
                j = j + 1
            
            if j = m:
                return i  // Pattern found at index i
        
        // Recalculate the hash for the next window
        if i < n - m:
            textHash = (prime * (textHash - text[i] * h) + text[i + m]) % prime
            if textHash < 0:
                textHash = textHash + prime
    
    return -1  // Pattern not found
```