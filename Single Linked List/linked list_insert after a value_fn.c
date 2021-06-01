//insert after a value in a single linked list (fn)
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
void vinsert(nd*,int);
int main()
{
    nd *start,*temp,*ptr;
    int val;
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
    printf("\nInput value :: ");
    scanf("%d",&val);
    vinsert(start,val);
    display(start);
    return 0;
}
void vinsert(nd *s,int val)
{
    nd *temp,*new;
    temp=s;
    while(temp!=NULL)
    {
        if(temp->info==val)
        {
            break;
        }
        else
        {
            temp=temp->next;
        }
    }
    new=(nd*)malloc(sizeof(nd));
    printf("New node:: ");
    scanf("%d",&(new->info));
    if(temp!=NULL)
    {
        new->next=temp->next;
        temp->next=new;
    }
    else
    {
        printf("The node is not present .\n");
    }
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



