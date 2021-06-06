//double LL insert at begin end & after ith position
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next,*prev;
};
typedef struct node nd;
nd* creat(nd*);
void display(nd*);
nd* binsert(nd*);
void einsert(nd*);
void insert(nd*,int);

int main()
{
    nd *start=NULL;
    int i;
    start=creat(start);
    display(start);
    start=binsert(start);
    display(start);

    einsert(start);
    display(start);

    printf("\nInput i:: ");
    scanf("%d",&i);
    insert(start,i);
    display(start);
    return 0;
}

nd* creat(nd *start)
{
    nd *temp,*pre;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        printf("Input data to 1st node:: ");
        scanf("%d",&(start->info));
        start->prev=NULL;
        start->next=NULL;
    }
    temp=start;
    char ch='y';
    while(ch=='y')
    {
        temp->next=(nd*)malloc(sizeof(nd));
        pre=temp;
        temp=temp->next;
        printf("Input new node:: ");
        scanf("%d",&(temp->info));
        temp->prev=pre;
        printf("Enter 'y' to continue and 'n' to stop:: ");
        scanf(" %c",&ch);
    }
    temp->next=NULL;
    return start;
}

void display(nd *s)
{
    nd *ptr,*p1;
    ptr=s;
    printf("Forward traverse ::\n ");
    while(ptr!=NULL)
    {
        p1=ptr;
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}

nd* binsert(nd *s)
{
    nd *new;
    new=(nd*)malloc(sizeof(nd));
    printf("\nEnter new 1st node:: ");
    scanf("%d",&(new->info));
    new->next=s;
    s->prev=new;
    s=new;
    return s;
}

void einsert(nd *s)
{
    nd *temp,*new;
    temp=s;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new=(nd*)malloc(sizeof(nd));
    printf("\nEnter last node:: ");
    scanf("%d",&(new->info));
    new->next=NULL;
    new->prev=temp;
    temp->next=new;
}

void insert(nd *s,int i)
{
    nd *temp,*new,*t1;
    int k;
    new=(nd*)malloc(sizeof(nd));
    printf("\nEnter new node:: ");
    scanf("%d",&(new->info));
    k=1;
    temp=s;
    while(k<i)
    {
        temp=temp->next;
        k++;
    }
    t1=temp->next;
    temp->next=new;
    new->prev=temp;
    new->next=t1;
    t1->prev=new;
}
