//reverse a linked list
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
nd* reverse(nd*);
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
    start=reverse(start);
    printf("\nAfter reversing >>>");
    display(start);
    return 0;
}
void display(nd *start)
{
    nd *ptr;
    ptr=start;
    printf("\nThe list is::\n ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}
nd* reverse(nd *s)
{
    nd *curnt,*prev,*temp;
    curnt=s;
    prev=curnt->next;
    curnt->next=NULL;
    while(prev!=NULL)
    {
        temp=prev->next;
        prev->next=curnt;
        curnt=prev;
        prev=temp;
    }
    s=curnt;
    return s;
}
