//swap conjugated node in single LL
#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
nd* creat(nd*);
void display(nd*);
void swap(nd*);
int count=0;
int main()
{
    nd *start=NULL;
    start=creat(start);
    display(start);
    swap(start);
    display(start);
    return 0;
}

nd* creat(nd *start)
{
    nd *temp;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        printf("Input data to 1st node:: ");
        scanf("%d",&(start->info));
        count++;
    }
    temp=start;
    char ch='y';
    while(ch=='y')
    {
        temp->next=(nd*)malloc(sizeof(nd));
        temp=temp->next;
        printf("Input new node:: ");
        scanf("%d",&(temp->info));
        printf("Enter 'y' to continue and 'n' to stop:: ");
        scanf(" %c",&ch);
        count++;
    }
    temp->next=NULL;
    return start;
}

void display(nd *start)
{
    nd *ptr;
    ptr=start;
    printf("The list is::\n ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}

void swap(nd *s)
{
    nd *temp,*b,*a;
    int k=1,i;
    temp=s;
    printf("\nCount = %d",count);
    printf("\nInput i(1<i<count) :: ");
    scanf("%d",&i);
    while(k<i-1)
    {
        temp=temp->next;
        k++;
    }
    a=temp->next;
    b=a->next;
    a->next=b->next;
    b->next=a;
    temp->next=b;
}

