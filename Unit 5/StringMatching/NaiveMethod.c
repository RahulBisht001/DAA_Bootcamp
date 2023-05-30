//^  C program for Naive Pattern Searching algorithm
//~ Also check the user input type below

#include <stdio.h>
#include <string.h>

void search(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);

    /*  A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            printf("Pattern found at index %d \n", i);
    }
}

// Driver's code
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";

    // Function call
    search(pat, txt);
    return 0;
}

#include <stdio.h>
#include <string.h>

void search(char *pat, char *txt)
{
    int n = strlen(txt);
    int m = strlen(pat);

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }

        if (j == m)
            printf("Pattern found at index %d \n", i);
    }
}

int main()
{

    char txt[100], pat[100];
    printf("Enter the Text String \n");
    gets(txt);

    printf("Enter the Pattern String \n");
    gets(pat);

    search(pat, txt);

    return 0;
}