//insert at begin in a single linked list (fn)
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
nd* binsert(nd*);
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
    start=binsert(start);
    display(start);
    return 0;
}
nd* binsert(nd *s)
{
    nd *new;
    new=(nd*)malloc(sizeof(nd));
    printf("\nNew 1st node:: ");
    scanf("%d",&(new->info));
    new->next=s;
    s=new;
    return s;
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


