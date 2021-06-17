//linked list bubble sort (fn)
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
void bsort(nd*);
void swap(nd*, nd*);
int main()
{
    nd *start=NULL;
    start=creat(start);
    printf("Element before sorting::\n");
    display(start);

    printf("Element after sorting::\n");
    bsort(start);
    display(start);
    return 0;
}

nd* creat(nd *start)
{
    nd *temp;
    if(start==NULL)
    {
        start=(nd*)malloc(sizeof(nd));
        printf("Input data to 1st node:: ");
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
    printf("\n");
}

void swap(nd *a, nd *b)
{
    int temp = a->info;
    a->info = b->info;
    b->info = temp;
}

void bsort(nd *start)
{
    int temp, i;
    nd *p1,*p2 = NULL;
    if (start == NULL)
        return;

    do
    {
        temp = 0;
        p1 = start;

        while (p1->next != p2)
        {
            if (p1->info > p1->next->info)
            {
                swap(p1, p1->next);
                temp = 1;
            }
            p1 = p1->next;
        }
        p2 = p1;
    }
    while (temp);
}

