#include <stdio.h>

int binarySearch(int arr[], int target, int n)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the Size of Array\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Array Values\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target = 28;
    int res = binarySearch(arr, target, n);

    if (res != -1)
        printf("Element Found at  index %d and value is %d ", res, target);
    else
        printf("Element Not Found");
}
