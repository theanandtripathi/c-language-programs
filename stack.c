
#include <stdio.h>
#include <stdlib.h>
struct arraystack{
    int capacity;
    int top;
    int* array;
};
void create(struct arraystack* stack) 
{  
    printf("enter the capaciy of your stack !");
    scanf("%d",&stack->capacity);
    // stack->top=-1;
    (*stack).top=-1;
      stack->array=(int*)malloc(stack->capacity*sizeof (int));
}
int isFull(struct arraystack* stack){
   if(stack->capacity==stack->top+1) 
   return 1;
   else
   return 0;
}
int isEmpty(struct arraystack* stack){
    if (stack->top==-1)
    return 1;
    else 
    return 0;
}

void push(struct arraystack *stack)

{  if(!isFull(stack)){
       int value;
    stack->top++;
    printf("enter a value you want to push\n");
    scanf("%d",&value);
    (*stack).array[stack->top]=value;
}
else {
    printf("*****************     the stack is full     *****************\n");
}
 
}
int pop(struct arraystack *stack)

{  if(!isEmpty(stack)){
       int value;
      value=(*stack).array[stack->top];
    stack->top--;
    return value;
}
else {
    printf("****************       the stack is Empty      ***************\n");
}
 
}

void print(struct arraystack *stack){
    printf("\n all values in stack are as follows\n");
    for(int i=0;i<=stack->top;i++)
    {
        printf("%d\n",stack->array[i]);
        
    }
}

int main()
{   struct arraystack stack;
int n;
printf(" time to create a stack!\n");
create(&stack);
while(2)
{
    
    printf("enter 1 for pushing a value\n");
    printf("enter 2 for popping  a value\n");
    printf("enter 3 for printing all values\n\n");
    printf(":enter your desired option   ");
    scanf("%d",&n);
    switch(n){
        case 1: push(&stack);
        break;
        case 2:printf("\n the popped value is %d\n",pop(&stack));
        break;
        case 3:print(&stack);
        break;
    }
}
    return 0;
}
