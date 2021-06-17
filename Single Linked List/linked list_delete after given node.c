//delete after a given node single linked list
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
void delete_after_ele(nd*);
int main()
{
    nd *start=NULL;
    start=creat(start);
    display(start);
    delete_after_ele(start);
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

void delete_after_ele(nd *start)
{
    nd *temp, *dele;
    int ele;
    if (start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf("\nEnter the value after which you want to delete: ");
        scanf("%d",&ele);
        temp=start;
        while(temp!=NULL && temp->info!=ele)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            printf("\nNode is not present\n");
        }
        else
        {
            dele=temp->next;
            temp->next=dele->next;
        }
        free(dele);
    }
}

