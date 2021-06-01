//delete last node (fn)
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
nd* creat(nd*);
void display(nd*);
void deleteln(nd*);
int main()
{
    nd *start=NULL;
    start=creat(start);
    display(start);
    deleteln(start);
    printf("\nAfter deleting last node::\n");
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

void deleteln(nd *start)
{
    nd *dele,*temp;
    dele=start;
    while(dele->next!=NULL)
    {
        temp=dele;
        dele=dele->next;
    }
    printf("\nDeleted node is %d\n",dele->info);
    temp->next=NULL;
    free(dele);
}

