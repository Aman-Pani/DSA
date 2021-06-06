#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next,*prev;
};
typedef struct node nd;
nd* creat(nd*);
void display_f(nd*);
//void display_b(nd*);

int main()
{
    nd *start=NULL;
    start=creat(start);
    display_f(start);
    //display_b(start);
    return 0;
}

nd* creat(nd *start)
{
    nd *temp,*pre;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        printf("Input data to 1st node:: ");
        scanf("%d",&(start->info));
        start->prev=NULL;
        start->next=NULL;
    }
    temp=start;
    char ch='y';
    while(ch=='y')
    {
        temp->next=(nd*)malloc(sizeof(nd));
        pre=temp;
        temp=temp->next;
        printf("Input new node:: ");
        scanf("%d",&(temp->info));
        temp->prev=pre;
        printf("Enter 'y' to continue and 'n' to stop:: ");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return start;
}

void display_f(nd *s)
{
    nd *ptr,*p1;
    ptr=s;
    printf("\nForward traverse ::\n ");
    while(ptr!=NULL)
    {
        p1=ptr;
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }

    printf("\nBackward traverse ::\n ");
    while(p1!=NULL)
    {
        printf("%d\t",p1->info);
        p1=p1->prev;
    }
}

/*void display_b(nd *s)
{
    nd *ptr,*p1;
    ptr=s;
    printf("\nBackward traverse ::\n ");
    while(p1!=NULL)
    {
        p1=ptr;
        printf("%d\t",p1->info);
        p1=p1->prev;
    }
}*/
