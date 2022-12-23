// THIS CODE CONTAINS DIFFERENT TRIANGULAR SHAPES !

#include <stdio.h>

int main()
{
    int i, j, k, n;
    printf("First Figure\n");
    printf("enter number of rows you want\n");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // SHAPE NUMBER TWO ##############################################################################

    printf("\n");
    printf("Second Figure\n");
    printf("enter number of rows you want\n");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // SHAPE NUMBER THREE ##############################################################################
    printf("\n");
    printf("Third Figure\n");
    printf("enter number of rows you want\n");
    scanf("%d", &n);
    printf("\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // SHAPE NUMBER FOUR ##############################################################################

    printf("\n");
    printf("Fourth Figure\n");
    printf("enter number of rows you want\n");
    scanf("%d", &n);
    printf("\n");
    for (i = n; i >= 1; i--)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
