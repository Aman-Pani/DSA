//menu driven
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
nd* creat(nd*);
void display(nd*);
nd* binsert(nd*);
void einsert(nd*);
void insert(nd*,int);
void vinsert(nd*,int);
void search(nd*,int);
void ssort(nd*);
nd* deletefn(nd*);
void deleteln(nd*);
void idelete(nd*,int);
nd* reverse(nd*);
void merge(nd*, nd*);

int main()
{
    nd *start=NULL,*temp,*start2=NULL;
    int ch,i,val,ele;
    while(1)
    {
        printf("\nCHOOSE MENU \n 1. Create a linked list \n 2. Traversal ");
        printf("\n 3. Insert an element at begin \n 4. Insert an element at end");
        printf("\n 5. Insert an element after ith node of list ");
        printf("\n 6. Insert a new node after a particular value of list ");
        printf("\n 7. Search an element from a list");
        printf("\n 8. Sort the nodes \n 9. Delete 1st node");
        printf("\n 10.Delete last node \n 11.Delete i th node");
        printf("\n 12.Reverse \n 13.Merge \n 14.Exit");
        printf("\n>>>");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("New linked list\n");
            start=creat(start);
            break;
        case 2:
            printf("The list is::\n ");
            display(start);
            break;
        case 3:
            start=binsert(start);
            break;
        case 4:
            einsert(start);
            break;
        case 5:
            printf("Input i :: ");
            scanf("%d",&i);
            insert(start,i);
            break;
        case 6:
            printf("Input value :: ");
            scanf("%d",&val);
            vinsert(start,val);
            break;
        case 7:
            printf("Input element :: ");
            scanf("%d",&ele);
            search(start,ele);
            break;
        case 8:
            ssort(start);
            printf("After sorting ::\n");
            display(start);
            break;
        case 9:
            start=deletefn(start);
            break;
        case 10:
            deleteln(start);
            break;
        case 11:
            idelete(start,i);
            break;
        case 12:
            start=reverse(start);
            printf("After reversing:: ");
            display(start);
            break;
        case 13:
            //start1=creat(start1);
            start2=creat(start2);
            printf("\nElements of 1st list ::\n");
            display(start);
            printf("Elements of 2nd list ::\n");
            display(start2);
            merge(start,start2);
            printf("List after merging ::\n");
            display(start);
            break;
        case 14:
            exit(1);
            break;
        default:
            printf("Invalid option.\n");
        }
    }
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
    //printf("The list is::\n ");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}

nd* binsert(nd *s)
{
    nd *new;
    new=(nd*)malloc(sizeof(nd));
    printf("New 1st node:: ");
    scanf("%d",&(new->info));
    new->next=s;
    s=new;
    return s;
}

void einsert(nd *s)
{
    nd *new,*temp;
    temp=s;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new=(nd*)malloc(sizeof(nd));
    new->next=NULL;
    printf("Input last node:: ");
    scanf("%d",&(new->info));
    temp->next=new;
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
    printf("New node:: ");
    scanf("%d",&(new->info));
    new->next=ptr->next;
    ptr->next=new;
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

nd* deletefn(nd *start)
{
    nd *dele;
    dele=start;
    start=start->next;
    printf("Deleted node is %d\n",dele->info);
    free(dele);
    return start;
}

void deleteln(nd *start)
{
    nd *dele,*temp;
    dele=start;
    while(dele->next!=NULL)
    {
        temp=dele;
        dele=dele->next;
    }
    printf("Deleted node is %d\n",dele->info);
    temp->next=NULL;
    free(dele);
}

void idelete(nd *s,int i)
{
    nd *ptr,*dele;
    int k=1;
    dele=s;
    printf("Value of i(i > 1):: ");
    scanf("%d",&i);
    while(k<i)
    {
        ptr=dele;
        dele=dele->next;
        k++;
    }
    ptr->next=dele->next;
    printf("Deleted node is %d \n",dele->info);
    free(dele);
}

nd* reverse(nd *s)
{
    nd *curnt,*prev,*temp;
    curnt=s;
    prev=curnt->next;
    curnt->next=NULL;
    while(prev!=NULL)
    {
        temp=prev->next;
        prev->next=curnt;
        curnt=prev;
        prev=temp;
    }
    s=curnt;
    return s;
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
