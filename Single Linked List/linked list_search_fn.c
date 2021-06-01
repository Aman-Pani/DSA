//search in linked list
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
void search(nd*,int);
int main()
{
    nd *start,*temp,*ptr;
    int ele;
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
    printf("\nInput element :: ");
    scanf("%d",&ele);
    search(start,ele);
    return 0;
}
void search(nd *start,int ele)
{
    nd *ptr;
    ptr=start;
    int flag;
    while(ptr!=NULL)
    {
        if(ptr->info==ele)
        {
            flag=1;
            break;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(flag==1)
    {
        printf("Element is present.\n");
    }
    else
    {
        printf("Element is absent.\n");
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
