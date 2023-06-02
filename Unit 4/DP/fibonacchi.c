// # Recursive method
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 4;
    int fib = fibonacci(n);
    printf("Fibonacci number at index %d is: %d\n", n, fib);
    return 0;
}

// # Memoized Code
#include <stdio.h>

#define MAX 100
int fib[MAX];

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    if (fib[n] != -1)
        return fib[n];

    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}

int main()
{
    int n = 20; // Change 'n' to the desired Fibonacci number index

    for (int i = 0; i < MAX; i++)
        fib[i] = -1;

    int fibNum = fibonacci(n);
    printf("Fibonacci number at index %d is: %d\n", n, fibNum);

    return 0;
}

// # Tabulation
#include <stdio.h>

int fibonacci(int n)
{
    int fib[n + 2];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// # Space optimized

#include <stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, c;

    if (n == 0)
        return a;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
