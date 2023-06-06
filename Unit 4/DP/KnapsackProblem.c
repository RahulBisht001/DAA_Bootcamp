// # Recursive Solution:

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapsack(W, wt, val, n - 1);

    else
        return max(val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1),
                   knapsack(W, wt, val, n - 1));
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    int result = knapsack(W, wt, val, n);

    printf("Maximum value: %d\n", result);

    return 0;
}

// # Memoized Solution :

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
int dp[MAX][MAX];

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n - 1] > W)
        dp[n][W] = knapsack(W, wt, val, n - 1);
    else
        dp[n][W] = max(val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1),
                       knapsack(W, wt, val, n - 1));

    return dp[n][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    memset(dp, -1, sizeof(dp));
    int result = knapsack(W, wt, val, n);

    printf("Maximum value: %d\n", result);

    return 0;
}

// # Tabulation Solution :

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    int result = knapsack(W, wt, val, n);

    printf("Maximum value: %d\n", result);

    return 0;
}

// # Space-Optimized Solution :

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int dp[2][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                dp[i % 2][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i % 2][w] = max(val[i - 1] + dp[(i - 1) % 2][w - wt[i - 1]], dp[(i - 1) % 2][w]);
            else
                dp[i % 2][w] = dp[(i - 1) % 2][w];
        }
    }

    return dp[n % 2][W];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    int result = knapsack(W, wt, val, n);

    printf("Maximum value: %d\n", result);

    return 0;
}