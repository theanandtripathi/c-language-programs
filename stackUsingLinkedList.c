#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * top=NULL;
struct node * memoryAllocation(){
    struct node * newnode;
    newnode=(struct node * )malloc(sizeof(struct node));
    printf("enter the data for ur stack\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    return newnode;
}
void push(){
    struct node  * newnode;
    newnode=memoryAllocation();
    newnode->next=top;
    top=newnode;
}
void display(){
    struct node * temp;
    temp=top;
    printf("here is data in ur stack !\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void pop(){
    struct node* temp;
    temp=top;
    top=top->next;
    free(temp);
}
int main()
{   
    push();
    push();
    push();
    push();
    pop();
    display();
    return 0;
}
