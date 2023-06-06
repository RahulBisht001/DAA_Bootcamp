```cpp
class Solution {
public:
    int nthUglyNumber(int n) {
        int uglyArr[n];
        uglyArr[0] = 1;

        int idx2 = 0, idx3 = 0, idx5 = 0;
        int fac2 = 2, fac3 = 3, fac5 = 5;

        for (int i = 1; i < n; ++i) {
            int min_val = min(fac2, min(fac3, fac5));
            uglyArr[i] = min_val;

            if (fac2 == min_val)
                fac2 = 2 * uglyArr[++idx2];
            if (fac3 == min_val)
                fac3 = 3 * uglyArr[++idx3];
            if (fac5 == min_val)
                fac5 = 5 * uglyArr[++idx5];
        }

        return uglyArr[n - 1];
    }
};
```