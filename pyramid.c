#include <stdio.h>

int main(){
         int i,j,k,n;
         printf("enter number of columns you want in your picture \n");
         scanf("%d",&n);
         for(j=1;j<=n/2+1;j++)
         {
         for(i=(n/2+1)-j;i>=1;i--)
         { printf(" "); 
         }
         for(k=1;k<=2*j-1;k++)
         {
             printf("*");
         }
         printf("\n");
         }
        return 0;
}