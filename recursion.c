#include <stdio.h>
int f(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        printf("%d", x % 2);
        return f(x / 2);
    }
}
int main()
{
    int x;
    printf("enter a number and get their binary\n");
    scanf("%d", &x);
    printf("%d", f(x));
    return 0;
}