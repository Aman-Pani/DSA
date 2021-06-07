//double LL deletion at begin end &  ith position
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next,*prev;
};
typedef struct node nd;
nd* creat(nd*);
void display_f(nd*);
nd* bdelete(nd*);
void edelete(nd*);
void idelete(nd*,int);
int count=0;

int main()
{
    nd *start=NULL;
    int i;
    start=creat(start);
    display_f(start);

    start=bdelete(start);
    display_f(start);

    edelete(start);
    display_f(start);

    idelete(start,i);
    display_f(start);
    return 0;
}

nd* creat(nd *start)
{
    nd *temp,*pre;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        count++;
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
        count++;
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

void display_f(nd *s)
{
    nd *ptr,*p1;
    ptr=s;
    printf("\nForward traverse ::\n ");
    while(ptr!=NULL)
    {
        p1=ptr;
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}

nd* bdelete(nd *s)
{
    nd *dele;
    dele=s;
    s=s->next;
    s->prev=NULL;
    printf("\nDeleted node is %d\n",dele->info);
    count--;
    free(dele);
    return s;
}

void edelete(nd *s)
{
    nd *dele,*t;
    t=s;
    while(t->next->next!=NULL)
    {
        t=t->next;
    }
    dele=t->next;
    printf("\nDeleted node is %d\n",dele->info);
    t->next=NULL;
    count--;
    free(dele);
}

void idelete(nd *s,int i)
{
   int k=1;
   nd *temp,*t1 ,*dele;
   printf("\nCount= %d",count);
   printf("\nInput i(1 < i < count):: ");
   scanf("%d",&i);
   dele=s;
   while(k<i)
   {
       dele=dele->next;
       k++;
   }
   temp=dele->prev;
   temp->next=dele->next;
   t1=temp->next;
   t1->prev=temp;
   printf("\nDeleted node is %d\n",dele->info);
   count--;
   free(dele);
}
