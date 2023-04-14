#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int size, int key)
{
    int step = sqrt(size); // finding the block size to be jumped
    int prev = 0;

    // finding the block where the key is present
    while (arr[min(step, size) - 1] < key)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
        {
            return -1; // key not found
        }
    }

    // linear search for the key in the block starting from prev
    while (arr[prev] < key)
    {
        prev++;
        if (prev == fmin(step, size))
        {
            return -1; // key not found
        }
    }

    if (arr[prev] == key)
    {
        return prev; // key found at index prev
    }

    return -1; // key not found
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = jumpSearch(arr, size, key);

    if (result == -1)
    {
        printf("Key not found");
    }
    else
    {
        printf("Key found at index %d", result);
    }

    return 0;
}
