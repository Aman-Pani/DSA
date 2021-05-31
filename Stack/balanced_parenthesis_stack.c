//balanced parenthesis
#include<stdio.h>
#define size 30
void push(char [],char ,int*);
char pop(char[],int*);
int main()
{
    char stk[size],str[size];
    int i,top=-1;
    printf("enter a string\n");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
        {
            push(stk,str[i],&top);
        }
        else if(str[i]==')')
        {
            pop(stk,&top);
        }
    }
    if(top==-1)
    {
        printf("Expression is parenthesis balanced..\n");
    }
    else
    {
        printf("Expression is not parenthesis balanced..\n");
    }
    return 0;
}
void push(char stk[size],char ch,int *top)
{
    if(*top==size-1)
    {
        printf("STACK OVERFLOW.\n");
    }
     else
    {
        (*top)++;
        stk[*top]=ch;
    }
}
char pop(char stk[size],int *top)
{
    char ch;
    if(*top==-1)
    {
        printf("STACK UNDERFLOW.\n");
    }
    else
    {
        ch=stk[*top];
        (*top) --;
    }
    return ch;
}
