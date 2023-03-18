#include <stdio.h>

int binarySearch(int A[], int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int firstIndex(int A[], int target, int start, int end)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == target)
        {
            end = mid - 1;
            ans = mid;
        }
        else if (A[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int lastIndex(int A[], int target, int start, int end)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (A[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int A[] = {1, 2, 3, 4, 4, 4, 5, 6, 7};
    int len = sizeof(A) / sizeof(int);
    int target = 4;
    int idx = binarySearch(A, target, 0, len);

    if (idx == -1)
        printf("Key not present");
    else
    {
        printf("The First Occurence of Key is : %d\n", firstIndex(A, target, 0, len));
        printf("The Last Occurence of Key is : %d\n", lastIndex(A, target, 0, len));
    }
}
