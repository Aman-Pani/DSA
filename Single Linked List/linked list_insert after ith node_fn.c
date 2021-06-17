//insert at ith position in a single linked list (fn)
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
void insert(nd*,int);
int main()
{
    nd *start,*temp,*ptr;
    int i;
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
    printf("\nInput i :: ");
    scanf("%d",&i);
    insert(start,i);
    display(start);
    return 0;
}
void insert(nd *s, int i)
{
    nd *new,*ptr;
    int k;
    k=1;
    ptr=s;
    while(k<i)
    {
        ptr=ptr->next;
        k++;
    }
    new=(nd*)malloc(sizeof(nd));
    printf("\nNew node:: ");
    scanf("%d",&(new->info));
    new->next=ptr->next;
    ptr->next=new;
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
