//stack as ADT
#include<stdio.h>
#include<stdlib.h>
#define siz 10
struct stack
{
    int stk[siz],top;
};
typedef struct stack st;
void push(st*,int);
int pop(st*);
void display(st);
int main()
{
    st s;
    s.top=-1;
    int opt,ele,pele;
    while(1)
    {
        printf("Input \n 1.PUSH \n 2.POP \n 3.TRAVERSE \n 4.EXIT");
        printf("\n>>>");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                printf("Enter element:: ");
                scanf("%d",&ele);
                push(&s,ele);
                break;
            case 2:
                pele=pop(&s);
                printf("Popped elemente is %d\n",pele);
                break;
            case 3:
                display(s);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid option!!!\n");
        }
    }
    return 0;
}

void push(st *s,int ele)
{
    if((s->top) == siz-1)
    {
        printf("Stack is full!!!\n");
    }
    else
    {
        (s->top)++;
        s->stk[s->top]=ele;
    }
}

int pop(st *s)
{
    int temp;
    if((s->top)==-1)
    {
        printf("Stack is empty!!!\n");
    }
    else
    {
        temp=s->stk[s->top];
        (s->top)--;
    }
    return temp;
}

void display(st s)
{
    int i;
    if((s.top)>=0)
    {
        printf("Elements of stack ::\n");
        for(i=s.top;i>=0;i--)
        {
            printf("%d\t",s.stk[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Stack is empty!!!\n");
    }
}
