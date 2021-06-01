//insert at end in a single linked list (fn)
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
void einsert(nd*);
int main()
{
    nd *start,*temp,*ptr;
    start=(nd*)malloc(sizeof(nd));
    printf("Input data to 1st node:: ");
    scanf("%d",&(start->info));
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
    display(start);
    einsert(start);
    display(start);
    return 0;
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
void einsert(nd *s)
{
    nd *new,*temp;
    temp=s;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new=(nd*)malloc(sizeof(nd));
    new->next=NULL;
    printf("\nInput last node:: ");
    scanf("%d",&(new->info));
    temp->next=new;
}
