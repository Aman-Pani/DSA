//queue as ADT
#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue
{
    int que[size],front,rear;
};
typedef struct queue q;
void enqueue(q*,int);
int dequeue(q*);
void display(q);

int main()
{
    q Q;
    Q.front=-1,Q.rear=-1;
    int opt,ele,pele;
    while(1)
    {
        printf("\nInput\n 1.Enqueue\n 2.Dequeue\n 3.Traverse\n 4.Exit\n>>>");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                printf("Enter an element to queue:: ");
                scanf("%d",&ele);
                enqueue(&Q,ele);
                break;
            case 2:
                pele = dequeue(&Q);
                printf("Popped element is %d\n",pele);
                break;
            case 3:
                display(Q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!!!\n");
        }
    }
    return 0;
}

void enqueue(q *Q,int ele)
{
     if(((Q->front)==-1) && ((Q->rear)==-1))
     {
        (Q->front)=(Q->rear)=0;
        Q->que[Q->rear]=ele;
    }
    else if((Q->rear)==size-1)
    {
        printf("Queue is FULL!!!\n");
        return;
    }
    else
    {
        (Q->rear)++;
        Q->que[Q->rear]=ele;
    }
}

int dequeue(q *Q)
{
    int ele;
    if(((Q->front)==-1) && ((Q->rear)==-1))
    {
        printf("Queue is EMPTY!!!\n");
        //return;
    }
    else if((Q->front)==(Q->rear))
    {
        ele=Q->que[Q->front];
        (Q->front)=(Q->rear) = -1;
    }
    else
    {
        ele=Q->que[Q->front];
        (Q->front)++;
    }
    return ele;
}

void display(q Q)
{
    int i;
    printf("Elements of queue :: \n");
    if((Q.front==-1) || (Q.rear==-1))
    {
        printf("NO ELEMENT IS PRESENT!!\n");
    }
    else
    {
        for(i=(Q.front);i<=(Q.rear);i++)
        {
            printf("%d\t",Q.que[i]);
        }
        printf("\n");
    }
}
