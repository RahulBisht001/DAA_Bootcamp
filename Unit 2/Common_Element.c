#include <stdio.h>
#include <stdlib.h>

void sortedArrUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    printf("Common elements: ");
    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 6, 8};
    int arr2[] = {2, 4, 6, 7, 8};
    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);

    sortedArrUnion(arr1, arr2, m, n);
    return 0;
}
