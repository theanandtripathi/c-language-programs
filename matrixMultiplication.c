#include <stdio.h>

int main()
{
    int size,x,y=0,z,m,i,k,t;
     printf("enter number of rows in your square matrices\n");
    scanf("%d",&size);
    int a[size][size];
    int b[size][size];
  
    for(x=0;x<size;x++)
    { printf("enter row number %d for first matrix\n",(x+1));
        for(z=0;z<size;z++)
        {   
            scanf("%d",&a[x][z]);
        }
        
    }
    printf("matrix entered by you is given below\n\n");
    for(x=0;x<size;x++)
    { 
        for(z=0;z<size;z++)
        {
            printf("%d   ",a[x][z]);
        }
        printf("\n");
        
    }
    printf("\n");
    for(x=0;x<size;x++)
    { printf("enter row number %d for second marix\n",(x+1));
        for(z=0;z<size;z++)
        {   
            scanf("%d",&b[x][z]);
        }
        
    }
    printf("matrix entered by you is given below\n\n");
    for(x=0;x<size;x++)
    { 
        for(z=0;z<size;z++)
        {
            printf("%d   ",b[x][z]);
        }
        printf("\n");
        
    }
   printf("\n \n multiplied marix is \n\n");
    int p=0;
    for(t=0;t<size;t++)
    {
        for(k=0;k<size;k++)
        {
            for(i=0;i<size;i++)
            {
                m=a[t][i]*b[i][k];
                p=p+m;
                
            }

            printf("%d   ",p);
            p=0;
        }
        printf("\n");
    }
    
    return 0;
}