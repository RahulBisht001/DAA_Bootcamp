// Counting sort in C programming

#include <stdio.h>

void countingSort(int arr[], int size)
{
    int output[10];

    // Find the largest element of the arr
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    // The size of count must be at least (max+1) but we cannot declare it
    // as int count(max+1) in C as it does not support dynamic memory
    // allocation.So, its size is provided statically.

    int count[10] = {0};

    // Initialize count arr with all zeros.
    // for (int i = 0; i <= max; ++i)
    // {
    //     count[i] = 0;
    // }

    // Store the count of each element
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    // Store the cumulative count of each arr
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    // Find the index of each element of the original arr in count arr, and
    // place the elements in output arr
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements into original arr
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}

// Function to print an arr
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

// Driver code
int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array \n");
    printArray(arr, n);

    countingSort(arr, n);

    printf("Sorted Array \n");
    printArray(arr, n);
}