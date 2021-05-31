//decimal to binary conversion using stack
#include<stdio.h>
#define size 100
void push(int[],int,int*);
int pop(int[],int*);
int main()
 {
     int num,stk[size],top=-1,rem;
     printf("Enter an integer:: ");
     scanf("%d",&num);
     printf("Binary conversion is :: ");
     while(num!=0)
     {
         rem=num%2;
         push(stk,rem,&top);
         num=num/2;
     }
     while(top!=-1)
        printf("%d",pop(stk,&top));
     printf("\n");
     return 0;
 }
 void push(int stk[size],int a,int *top)
 {
     if(*top==size-1)
        printf("stack overflow\n");
     else
     {
         *top=(*top+1);
         stk[*top]=a;
     }
 }
 int pop(int stk[size],int *top)
 {
     int a;
     if(*top==-1)
     {
         printf("Stack underflow\n");
     }
     else
    {
        a=stk[*top];
        *top=(*top-1);
    }
    return a;
 }
