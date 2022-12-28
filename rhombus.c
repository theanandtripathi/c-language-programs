#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter number of rows you want in your square\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
   {
      
        for(j=i;j<=n/2-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=n/2-1;i>=1;i--) 
     {
        for(k=1;k<=n/2-i;k++) 
        {
            printf(" ");
        }
         for(j=1;j<=2*i-1;j++)
         {
             printf("*");
         }
         printf("\n");
     }
    return 0;
}
