#include <stdio.h>

int cnt = 0;
void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        cnt += 1;
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);

    cnt++;
    printf("Move disk %d from %c to %c\n", n, source, destination);

    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    printf("%d", cnt);
    return 0;
}

// #include <stdio.h>
// int cnt = 0;

// void towerOfHanoi(int n, char source, char destination, char auxillary)
// {
//     if (n == 1)
//     {
//         cnt += 1;
//         printf("Move disk 1 from %c to %c\n", source, destination);
//         return;
//     }

//     cnt++;
//     towerOfHanoi(n - 1, source, auxillary, destination);

//     printf("Move disk %d from %c to %c\n", n, source, destination);

//     towerOfHanoi(n - 1, auxillary, destination, source);
// }

// int main()
// {
//     int n;
//     printf("Enter the number of disks: ");
//     scanf("%d", &n);

//     towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
//     printf("%d", cnt);
//     return 0;
// }