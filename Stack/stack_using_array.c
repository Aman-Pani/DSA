//implementation of STACK using array
#include<stdio.h>
#include<stdlib.h>
#define size 10
int main()
{
    int stk[size],top=-1,ele,pele,opt;
    while(1)
    {
        printf("Input\n 1.push\n 2.pop\n 3.traverse\n 4.exit\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                if(top==size-1)
                    printf("Stack is full.\n");
                else
                {
                    printf("Insert element to stack:: ");
                    scanf("%d",&ele);
                    top++;
                    stk[top]=ele;
                }
                break;
            case 2:
                if(top==-1)
                    printf("Stack is empty .\n");
                else
                {
                    pele=stk[top];
                    top--;
                }
                printf("Poped element is=%d\n",pele);
                break;
            case 3:
                printf("Elements of stack are:: \n");
                for(int i=top;i>=0;i--)
                {
                    printf("%d\t",stk[i]);
                }
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("No option to be execute.\n");
        }
    }
return 0;
}
