//delete ith node
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
void idelete(nd*,int);
int main()
{
    nd *start,*temp;
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
    idelete(start,i);
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
void idelete(nd *s,int i)
{
    nd *ptr,*dele;
    int k=1;
    printf("\nValue of i:: ");
    scanf("%d",&i);
    ptr=s;
    while(k<i-1)
    {
        ptr=ptr->next;
        k++;
    }
    dele=ptr->next;
    ptr->next=dele->next;
    free(dele);
}
