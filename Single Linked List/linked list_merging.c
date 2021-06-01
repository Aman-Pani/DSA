//merge

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
void merge(nd*, nd*);
int main()
{
    nd *start1=NULL,*start2=NULL;
    start1=creat(start1);
    start2=creat(start2);
    printf("\nElements of 1st list::\n");
    display(start1);
    printf("\nElements of 2nd list ::\n");
    display(start2);
    merge(start1,start2);
    printf("\nList after merging ::\n");
    display(start1);
    return 0;
}

nd* creat(nd *start)
{
    nd *temp,*dele;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        printf("\nInput data to 1st node:: ");
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

void merge(nd *s1 , nd *s2)
{
    nd *temp;
    temp=s1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=s2;
}
