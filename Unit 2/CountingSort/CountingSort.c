//* Positive Negative Both

#include <stdio.h>

void countingSort(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];

    // Find the minimum and maximum values in the array
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }

    int range = max - min + 1;

    // Create count array and initialize with zeros
    int countArr[range];
    for (int i = 0; i < range; i++)
    {
        countArr[i] = 0;
    }

    // Count the occurrences of each element in the input array
    for (int i = 0; i < size; i++)
    {
        countArr[arr[i] - min]++;
    }

    // Modify count array to store cumulative counts
    for (int i = 1; i < range; i++)
    {
        countArr[i] += countArr[i - 1];
    }

    // Create a temporary output array
    int output[size];

    // Build the output array
    for (int i = size - 1; i >= 0; i--)
    {
        output[countArr[arr[i] - min] - 1] = arr[i];
        countArr[arr[i] - min]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = output[i];
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
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

// ? -------------------------------------------------

//* For Only Positive Numbers

#include <stdio.h>

void countingSort(int arr[], int size)
{

    // Find the largest element of the arr
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int countArr[max + 1];
    for (int i = 0; i <= max; i++)
    {
        countArr[i] = 0; // Initialize each element to zero
    }

    for (int i = 0; i < size; i++)
    {
        countArr[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (countArr[i] != 0)
        {
            arr[j++] = i;
            countArr[i]--;
        }
    }

    return;
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
