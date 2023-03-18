#include <stdio.h>

void threeSum(int A[], int target, int len)
{
    int i = 0;
    while (i < len - 2)
    {
        int j = i + 1;
        int k = len - 1;
        while (j < k)
        {

            int sum = A[i] + A[j] + A[k];
            if (sum == target)
            {
                printf("i = %d , j = %d , k = %d \n", i, j, k);
                k--;
            }
            else if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
        i++;
    }
}

int main()
{
    int A[] = {0, 1, 1, 1, 1, 2, 3, 4, 5, 5, 5};

    // int len = sizeof(A) / sizeof(int);
    // threeSum(A, 7, len);

    int cnt = 0;
    for (int i = 0; i < 11; ++i)
    {
        for (int j = i + 1; j < 11; ++j)
        {
            for (int k = j + 1; k < 11; ++k)
            {
                if (A[i] + A[j] + A[k] == 7)
                {
                    cnt++;
                    printf("i = %d , j = %d , k = %d \n", i, j, k);
                }
            }
        }
    }
    // printf("%d ", cnt);
}
