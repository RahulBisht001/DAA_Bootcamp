#include <stdio.h>
int main()
{

    int A[] = {1, 51, 84, 21, 31};

    int k = 20;
    int n = sizeof(A) / sizeof(int);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (A[j] - A[i] == k)
            {
                printf("j = %d i = %d\n", j, i);
            }
        }
    }
}