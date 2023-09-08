
#include <stdio.h>
#include<stdlib.h>
struct node {
    struct node *left;
    struct node * right;
    int data;
};
int count=0;
struct node* create(){
    int x;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data  for ur node \n Enter  -1 if you dont want any data in ur node !");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    else {
        newnode->data=x;
        count++;
    }
    printf("\n Enter left child of %d",x);
    newnode->left=create();
    printf("\nEnter the right child of %d",x);
    newnode->right=create();
    return newnode;
}

void inorderDisplay(struct node *root){
    if(root==NULL){
        return;
    }
    
    inorderDisplay(root->left);
    printf("%d \n",root->data);
    inorderDisplay(root->right);
    return;
}

void preorderDisplay(struct node* root){
 if(root==NULL)
 return;
 printf("%d  \n",root->data);
 preorderDisplay(root->left);
 preorderDisplay(root->right);
 return;
}

void postorderDisplay(struct node* root){
 if(root==NULL){
      return;
 }
 postorderDisplay(root->left);
 postorderDisplay(root->right); 
 printf("%d \n",root->data);
 return;
} 

int main()
{
 struct node *root;
 root=create();
 printf("inorder display of the tree is \n");
 inorderDisplay(root);
 printf("preorder display of the tree is \n");
 preorderDisplay(root);
 printf("postorder display of the tree is \n");
 postorderDisplay(root);
 printf("\nthere are total %d number of nodes in the tree",count);
    return 0;
}
