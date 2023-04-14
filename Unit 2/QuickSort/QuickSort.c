#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            // swap(&arr[i], &arr[j]);
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    // swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {4, -25, -212, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quicksort(arr, 0, n - 1);

    printf("Sorted Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int swaps = 0, comparisons = 0;

// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[low];
//     int i = low + 1;
//     int j = high;
//     do
//     {
//         while (arr[i] <= pivot)
//         {
//             comparisons++;
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             comparisons++;
//             j--;
//         }
//         if (i < j)
//         {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             swaps++;
//         }
//     } while (i < j);

//     int temp = arr[low];
//     arr[low] = arr[j];
//     arr[j] = temp;
//     swaps++;

//     return j;
// }
// int shuffle(int arr[], int start, int end)
// {
//     srand(time(0));
//     int random = start + rand() % (end - start);
//     int temp = arr[random];
//     arr[random] = arr[start];
//     arr[start] = temp;
//     return partition(arr, start, end);
// }
// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int partitionIndex = shuffle(arr, low, high);
//         quickSort(arr, low, partitionIndex - 1);
//         quickSort(arr, partitionIndex + 1, high);
//     }
// }
// int main()
// {

//     int size = 0, i;
//     printf("Enter the size of array : ");
//     scanf("%d", &size);
//     int arr[size];

//     printf("Enter the values of an array : ");
//     for (i = 0; i < size; i++)
//         scanf("%d", &arr[i]);

//     quickSort(arr, 0, size - 1);

//     printf("After quick sort...... : \n");
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);

//     printf("\nand swaps = %d and comparisons = %d\n", swaps, comparisons);

//     return 0;
// }
