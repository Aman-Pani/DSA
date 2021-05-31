//circular queue
#include<stdio.h>
#include<stdlib.h>
#define size 2
void enqueue(int [],int*,int*,int);
int dequeue(int [],int*,int*);
void traverse(int [],int,int);
int main()
{
	int ch,ele,pele,front=-1,rear=-1,que[size];
	while (1)
	{
		printf("1. Insert element\n");
		printf("2. Delete element\n");
		printf("3. Display elements\n");
		printf("4. Quit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			    printf("Insert element to Queue.\n");
			    scanf("%d",&ele);
				enqueue(que,&front,&rear,ele);
				break;
			case 2:
				pele=dequeue(que,&front,&rear);
				printf("Deleted element is %d\n",pele);
				break;
			case 3:
				traverse(que,front,rear);
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong choice.\n");
		}
	}
	return 0;
}
void enqueue(int que[],int *front,int *rear ,int ele)
{
	if(*front==-1 && *rear==-1)
    {
        *front=*rear=0;
        que[*rear]=ele;
    }
    else if((*front==0 && *rear==size-1) || ((*front)==(*rear)+1))
    {
        printf("Queue overflow.\n");
        return;
    }
    else
    {
        *rear=(*rear+1)%size;
        que[*rear]=ele;
    }
}
int dequeue(int que[],int *front,int *rear)
{
	int ele;
	if(*front==-1 && *rear==-1)
	{
		printf("Queue is empty.\n");
	}
	else if(*front==*rear)
	{
		ele=que[*front];
		*front=*rear=-1;
	}
	else
    {
        ele=que[*front];
        *front=(*front+1)%size;
    }
    return ele;
}
void traverse(int que[],int front,int rear)
{
	int i;
	printf("the element of queue:: ");
	for(i=front;i!=rear;i=(i+1)%size)
    {
        printf("%d\t",que[i]);
    }
    printf("%d\t",que[rear]);
    printf("\n");
}

