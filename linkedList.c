#include <stdio.h>
#include <stdlib.h>
struct node{

    int data;
    struct node *next;
};
void insertValue(struct node **temp){
     int value;
     struct node *n,*p;
     printf("enter value");
     scanf("%d",&value);

     n=(struct node*)malloc(sizeof(struct node));
     n->data=value;
     n->next=NULL;
     if(*temp==NULL)
     {
              *temp=n;
     }
     else{
         p=*temp;
         while(p->next!=NULL)
         {
             p=p->next;
         }
         p->next=n;
     }
}
void print(struct node **temp){
    struct node *p;
    printf("numbers you entered are as folows\n");
    p=*temp;
    while(p->next!=NULL)
         {
             printf("%d\n",p->data);
             p=p->next;
         }
           printf("%d",p->data);
}
int main()
{   
    struct node *start=NULL; 
    printf("\n\noption 1: enter a number\n");
    printf("option 2: print entered numbers\n");
  while(1)
  {   int c;
    
    scanf("%d",&c);
      switch(c)
      {
          case 1: insertValue(&start);
          break;
          case 2:print(&start);
      }
      
  }
    return 0;
}