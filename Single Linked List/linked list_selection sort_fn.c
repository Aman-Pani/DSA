//linked list selection sort  (fn)
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
void display(nd*);
void ssort(nd*);
int main()
{
    nd *start,*temp;
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
    ssort(start);
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
void ssort(nd *s)
{
    int min;
    nd *curnt,*nextpt,*minpt;
    curnt=s;
    while(curnt->next!=NULL)
    {
        min=curnt->info;
        minpt=curnt;
        nextpt=curnt->next;
        while(nextpt!=NULL)
        {
            if(nextpt->info<min)
            {
                min=nextpt->info;
                minpt=nextpt;
            }
            nextpt=nextpt->next;
        }
        if(min!=curnt->info)
        {
            minpt->info=curnt->info;
            curnt->info=min;
        }
        curnt=curnt->next;
    }
}
