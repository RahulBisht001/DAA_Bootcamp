#include <stdio.h>

int main()
{

    int arr[] = {2, 1, 9, 6, 3, 11, 9, 5, 4};
    int n = 9;
    int m = n;
    for (int k = 0; k < n; ++k)
    {
        printf("%d ", arr[k]);
    }

    printf("\n");

    while (n > 1)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            arr[i] = arr[i] + arr[j];
            i++;
            j--;
        }
        n = (n + 1) / 2;

        for (int k = 0; k < m; ++k)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}