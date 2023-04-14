/*

Bubble Sort

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int arr[10] = {3, 5, 1, 6, 7, 2, 3, 4, 78, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);

    printf("After Sorting\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }
}

*/

/*

Selection Sort
#include <stdio.h>

void selectionSort(int[], int);

int main()
{
    int arr[] = {3, 5, 1, 6, 7, 2, 3, 4, 78, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    selectionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; ++i)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }

        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

*/

/*

Insertion Sort
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {13, 11, 5, 6, 7, 2, 3, 4, 78, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    insertionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}

*/

/*
#include <stdio.h>

void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; ++i)
    {
        L[i] = arr[p + i];
    }

    for (int j = 0; j < n2; ++j)
    {
        M[j] = arr[q + j + 1];
    }

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = M[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {-60, -34, -23, -12, -5, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    mergeSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }
}

*/

/*

Counting Sort


#include <stdio.h>
#include <limits.h>

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void countSort(int arr[], int n)
{
    int maxNum = getMax(arr, n);
    int countArr[maxNum + 1];

    for (int i = 0; i <= maxNum; ++i)
        countArr[i] = 0;

    for (int i = 0; i < n; ++i)
    {
        countArr[arr[i]]++;
    }

    int i = 0, j = 0;
    while (i <= maxNum)
    {
        if (countArr[i] > 0)
        {
            countArr[i]--;
            arr[j] = i;
            j++;
        }
        else
            i++;
    }
}

int main()
{
    int arr[] = {10, 5, 7, 2, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    countSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", arr[i]);
    }
}

*/

#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high; ++j)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}
int quicksort(int arr[], int low, int high)
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
    int arr[] = {4, -25, -212, 22, -11};
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