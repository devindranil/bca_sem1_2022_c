// write a c program to print square of a natural number form 1 to n
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", i * i);
    }
    return 0;
}