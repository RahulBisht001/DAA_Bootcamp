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
    int arr[] = {4, 2, -2, 8, -3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array \n");
    printArray(arr, n);

    countingSort(arr, n);

    printf("Sorted Array \n");
    printArray(arr, n);
}

// #include <stdio.h> // QUESTION - 3
// #include <limits.h>
// #include <stdlib.h>
// int maxEle(int arr[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     return max;
// }
// void countSort(int arr[], int n)
// {
//     int i, j;
//     int maximum = maxEle(arr, n);
//     int *countArray = (int *)malloc((maximum + 1) * sizeof(int));
//     for (int i = 0; i <= maximum; i++)
//         countArray[i] = 0;
//     for (int i = 0; i < n; i++)
//     {
//         countArray[arr[i]]++;
//     }
//     i = 0;
//     j = 0;
//     while (i <= maximum)
//     {
//         if (countArray[i] > 0)
//         {
//             arr[j] = i;
//             countArray[i]--;
//             j++;
//         }
//         else
//             i++;
//     }
// }
// int main()
// {

//     int size = 0, i, key;
//     printf("Enter the size of array : ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter the values of an array : ");
//     for (i = 0; i < size; i++)
//         scanf("%d", &arr[i]);
//     printf("Enter the key index : ");
//     scanf("%d", &key);
//     printf("After count sort...... : ");
//     countSort(arr, size);
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\nThe %dth smallest element in the array is : %d ", key, arr[key - 1]);
//     printf("\n");

//     return 0;
// }
