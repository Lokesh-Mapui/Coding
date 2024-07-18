// sum of N_natural_number.cpp
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum is\n%d", sum);
    return 0;
}