//Program for postfix evaluation
#include<stdio.h>
#include<string.h>
#define max 10
void push(int [],int ,int*);
int pop(int[],int*);
int main()
{
    char str[max];
    int stk[max],a,b,i,top=-1,opt,ele,len;
    printf("Enter postfix expression\n");
    scanf("%s",str);
    i=0;
    len=strlen(str);
    while(i<len)
    {
        //opt = 0;
        if(isdigit(str[i]))
        {
            opt=1;
        }
        else
        {
            opt=2;
        }
        switch(opt)
        {
            case 1:
                ele=(int)str[i]-(int)'0';
                push(stk,ele,&top);
                break;
            case 2:
                b=pop(stk,&top);
                a=pop(stk,&top);
                printf("%c\t", str[i]);
                if(str[i]=='+')
                {
                    push(stk,(a+b),&top);
                }
                else if(str[i]=='-')
                {
                    push(stk,(a-b),&top);
                }
                else if(str[i]=='*')
                {
                    push(stk,(a*b),&top);
                }
                else
                {
                    push(stk,(a/b),&top);
                }
        }
        i++;
    }
    printf("\nresult= %d\n",stk[top]);
    return 0;
}//end of main
void push (int stk[],int ele, int *top)
{
    if(*top==max-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        (*top)++;
        stk[*top]=ele;
    }
}
int pop(int stk[],int *top)
{
    int ele;
    if(*top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        ele=stk[*top];
        (*top)--;
        return ele;
    }
}
