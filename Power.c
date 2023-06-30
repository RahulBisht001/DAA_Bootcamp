#include <stdio.h>

int powerFunc(int num, int power)
{
    if (power == 0)
        return 1;
    if (power == 1)
        return num;

    int temp = powerFunc(num, (power / 2));

    if ((power & 1) == 0)
        return temp * temp;
    else
        return temp * temp * num;
}

int main()
{

    int ans = powerFunc(2, 5);

    printf("Ans is : %d", ans);
    return 0;
}