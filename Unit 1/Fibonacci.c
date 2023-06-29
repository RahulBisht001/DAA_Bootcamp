/*
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int n;
    printf("Enter the Number\n");
    scanf("%d", &n);

    printf("The nth Fibonacci Number is : %d", fibonacci(n));

    return 0;
}
*/

#include <stdio.h>

int fibonacci(int n, int dp[])
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

int main()
{

    int n;
    printf("Enter the Number\n");
    scanf("%d", &n);
    int dp[n];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    printf("The nth Fibonacci Number is : %d\n", fibonacci(n, dp));

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", dp[i]);
    }

    return 0;
}