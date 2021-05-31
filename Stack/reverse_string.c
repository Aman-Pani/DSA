//reverse string
#include<stdio.h>
#define size 50
void push(char [],char ,int*);
char pop(char[],int*);
int main()
{
    char stk[size],str[size],ch;
    int top=-1,i;
    printf("Enter the string::\n");
    scanf("%[^\n]",str);
    printf("String before reverse::\n ::%s\n",str);
    i=0;
    while(str[i]!='\0')
    {
        push(stk,str[i],&top);
        i++;
    }
    i=0;
    while(top!=-1)
    {
        ch=pop(stk,&top);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("String after reverse::\n ::%s\n",str);
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
