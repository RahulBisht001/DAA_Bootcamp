#include <stdio.h>
#include <string.h>

int lcs(char *X, char *Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return (lcs(X, Y, m, n - 1) > lcs(X, Y, m - 1, n)) ? lcs(X, Y, m, n - 1) : lcs(X, Y, m - 1, n);
}

int main()
{
    char X[100], Y[100];
    printf("Enter the first string: ");
    gets(X);
    printf("Enter the second string: ");
    gets(Y);

    int m = strlen(X);
    int n = strlen(Y);

    int result = lcs(X, Y, m, n);

    printf("Length of Longest Common Subsequence: %d\n", result);

    return 0;
}

// # Memoized Code
#include <stdio.h>
#include <string.h>

#define MAX 100
int dp[MAX][MAX];

int lcs(char *X, char *Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;

    if (dp[m][n] != -1)
        return dp[m][n];

    if (X[m - 1] == Y[n - 1])
        dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1);
    else
        dp[m][n] = (lcs(X, Y, m, n - 1) > lcs(X, Y, m - 1, n)) ? lcs(X, Y, m, n - 1) : lcs(X, Y, m - 1, n);

    return dp[m][n];
}

int main()
{
    char X[100], Y[100];
    printf("Enter the first string: ");
    gets(X);
    printf("Enter the second string: ");
    gets(Y);

    int m = strlen(X);
    int n = strlen(Y);

    memset(dp, -1, sizeof(dp));
    int result = lcs(X, Y, m, n);

    printf("Length of Longest Common Subsequence: %d\n", result);

    return 0;
}

// # Tabulated Code

#include <stdio.h>
#include <string.h>

int lcs(char *X, char *Y, int m, int n)
{
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = (dp[i][j - 1] > dp[i - 1][j]) ? dp[i][j - 1] : dp[i - 1][j];
        }
    }

    return dp[m][n];
}

int main()
{
    char X[100], Y[100];
    printf("Enter the first string: ");
    gets(X);
    printf("Enter the second string: ");
    gets(Y);

    int m = strlen(X);
    int n = strlen(Y);

    int result = lcs(X, Y, m, n);

    printf("Length of Longest Common Subsequence: %d\n", result);

    return 0;
}

// # Space optimized Code
#include <stdio.h>
#include <string.h>

int lcs(char *X, char *Y, int m, int n)
{
    int dp[2][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                dp[i % 2][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                dp[i % 2][j] = 1 + dp[(i - 1) % 2][j - 1];
            else
                dp[i % 2][j] = (dp[i % 2][j - 1] > dp[(i - 1) % 2][j]) ? dp[i % 2][j - 1] : dp[(i - 1) % 2][j];
        }
    }

    return dp[m % 2][n];
}

int main()
{
    char X[100], Y[100];
    printf("Enter the first string: ");
    gets(X);
    printf("Enter the second string: ");
    gets(Y);

    int m = strlen(X);
    int n = strlen(Y);

    int result = lcs(X, Y, m, n);

    printf("Length of Longest Common Subsequence: %d\n", result);

    return 0;
}
