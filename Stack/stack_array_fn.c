//implementation of STACK using array (function)
#include<stdio.h>
#include<stdlib.h>
#define size 10
void push(int [],int,int*);
int pop(int [],int*);
void traverse(int[],int);

int main()
{
    int stk[size],top=-1,ele,pele,opt,i;
    while(1)
    {
        printf("Input\n 1.push()\n 2.pop()\n 3.traverse()\n 4.exit()\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                printf("Insert element to stack:: ");
                scanf("%d",&ele);
                push(stk,ele,&top);
                break;
            case 2:
                pele=pop(stk,&top);
                printf("Poped element is :: %d\n",pele);
                break;
            case 3:
                 traverse(stk,top);
                 break;
            case 4:
                exit(0);
            default:
                printf("No option to be execute.\n");
        }
    }
    return 0;
}
void push(int stk[], int ele, int *top )
{
    if(*top==size-1)
    {
        printf("Stack is overflow.\n");
    }
    else
    {
        (*top)++;
        stk[*top]=ele;
    }
}
int pop(int stk[],int *top)
{
    int temp;
    if(*top==-1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        temp=stk[*top];
        (*top)--;
    }
    return temp;
}
void traverse(int stk[],int top)
{
    int i;
    printf("Element of stack:: \n");
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stk[i]);
    }
    printf("\n");
}
