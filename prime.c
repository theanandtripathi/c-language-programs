#include <stdio.h>

int main()
{   int n,i,c=0;
    printf("enter a number and know if it is prime or not");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0){
           c++;
       }
    }
 if(c==2){
           printf("entered number is prime");
       }
       else{
           printf("entered number is not prime");
       }
    return 0;
}
