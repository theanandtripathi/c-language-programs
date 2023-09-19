#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left;
    struct node *right;
    int rank;
};
int rank=0;
struct node * newnode(int value){
    struct node * newnode;
    newnode=(struct node *) malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=value;
    rank++;
    newnode->rank=rank;
    return newnode;
}
struct node * insertion(struct node * root, int value){
    if(root==NULL){
        return newnode(value);
    }
    if (value<root->data){
        root->left= insertion(root->left, value);
    }
    else{
        root->right= insertion(root->right,value);
    }
    return root;
}



int binarySearch(struct node * root, int value){
    if(root->data==value){
        return root->rank;
    }
    if (value < root->data){
        return binarySearch(root->left,value);
    }
    else{
        return binarySearch(root->right,value);
    }
}
int main()
{
  struct node * root=NULL;
  int value1;
  int value2;
  int position;
  int option;
  int leave=0;
  while(leave==0){
      printf("enter 1 if u want to insert any value\n");
      printf("enter 2 if u want to search any value\n");
      printf("enter 0 if u want to exit\n");
      printf("_____________________________________________\n");
      printf("enter ur option  --->");
      scanf("%d",&option);
      
      switch(option){
          case 1:
          printf("enter the value u want to enter\n");
          scanf("%d",&value1);
          root=insertion(root,value1);
          break;
          case 2:
          printf("enter the value u want to search\n");
          scanf("%d",&value2);
         position= binarySearch(root,value2);
         printf("the position of ur entered value is %d\n\n",position);
          break;
          case 0:
          leave=1;
          break;
      }
  }
    return 0;
}
