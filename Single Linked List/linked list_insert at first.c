//insertion at starting of single linked list dynamically
#include<stdio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node nd;
int main()
{
    nd *start,*temp,*ptr;
    start=(nd*)malloc(sizeof(nd));
    printf("Input data to 1st node:: ");
    scanf("%d",&(start->info));
    int i;
    temp=start;
    printf("Input data to new node :: ");
    for(i=1;i<=5;i++)
    {
        temp->next=(nd*)malloc(sizeof(nd));
        temp=temp->next;
        scanf("%d",(&temp->info));
    }
    temp->next=NULL;
    ptr=start;
    printf("The list :: \n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    nd *new;
    new=(nd*)malloc(sizeof(nd));
    printf("\nNew 1st node:: ");
    scanf("%d",&(new->info));
    new->next=start;
    start=new;
    ptr=start;
    printf("The new list :: \n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    return 0;
}



