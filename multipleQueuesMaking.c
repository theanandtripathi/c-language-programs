

#include <stdio.h>
#include <stdlib.h>
struct queue{
    int front;
    int rear;
    int capacity;
    int * array;
};
struct queue* memoryAllocation(){
    struct queue * newnode;
    newnode=(struct queue *)malloc(sizeof(struct queue));
    printf("enter the size for your queue\n");
    scanf("%d",&newnode->capacity);
    newnode->array=(int*)malloc(sizeof(int)*newnode->capacity);
    newnode->front=-1;
    newnode->rear=-1;
    return newnode;
}
void enqueue(struct queue *newnode){
    int data;
    if((newnode->rear+1)%newnode->capacity==newnode->front){
        printf("queue is Full\n");
    }
    else if(newnode->front==-1 && newnode->rear==-1){
        newnode->front=0;
        newnode->rear=0;
        printf("enter the data for ur queue\n");
        scanf("%d",&data);
        newnode->array[newnode->rear]=data;
    }
    else{
        newnode->rear=((newnode->rear)+1)%newnode->capacity;
        printf("enter the data for ur queue\n");
        scanf("%d",&data);
        newnode->array[newnode->rear]=data;
    }
}
void display(struct queue * newnode){
    int i=newnode->front;
    while(i!=newnode->rear){
        printf("%d\n",newnode->array[i]);
        i=(i+1)%newnode->capacity;
    }
    printf("%d\n",newnode->array[i]);
}
void dequeue(struct queue * newnode){
    if(newnode->front==-1 && newnode->rear==-1){
        printf("the queue is already empty\n");
    }
    else if(newnode->front==newnode->rear){
        printf("the dequed element is %d\n",newnode->array[newnode->front]);
        newnode->front=-1;
        newnode->rear=-1;
    }
    else{
        printf("the dequed element is %d\n",newnode->array[newnode->front]);
        newnode->front=(newnode->front+1)%newnode->capacity;
    }
}
int main()
{  
    int queueNumbers;
    int queueNumber;
    int option;
    int leaveMain=1;
    printf("enter the number of queues u want to make");
    scanf("%d",&queueNumbers);
    struct queue * array[queueNumbers];
    for(int i=0;i<queueNumbers;i++){
        array[i]=NULL;
    }
    while(leaveMain!=0){
    int leave=1;
    printf("Enter the queue u want to deal with");
    scanf("%d",&queueNumber);
    if(array[queueNumber-1]==NULL){
        array[queueNumber-1]=memoryAllocation();
    }
    while(leave!=0){
    printf("enter 1 to enque in your queue\n");
    printf("enter 2 to deque in your queue\n");
    printf("enter 3 to display your queue\n");
    printf("enter 4 to go back\n");
    printf("enter 5 to exit this program\n");
    printf("________________________________________");
        printf("enter a option !\n");
        scanf("%d",&option);
        switch(option){
            case 1: enqueue(array[queueNumber-1]);
            break;
            case 2: dequeue(array[queueNumber-1]);
            break;
            case 3: display(array[queueNumber-1]);
            break;
            case 4:  leave=0;
            break;
            case 5:    leaveMain=0;
                        leave=0;
            break;
            default:
            printf("enter a valid option\n");
        }
    }
    }
    return 0;
}
