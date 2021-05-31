//linear search
#include<stdio.h>
#define size 5           //symbolic constant
void input(int[]);
void display(int []);
//void bsort(int []);
void Lsearch(int [],int);
int main()
{
    int a[size],ele;
    printf("Enter elements to array:\n");
    input(a);                     //input   //function call
    printf("Elements of array:\n");
    display(a);                           //display
    printf("Element to be searched:: ");
    scanf("%d",&ele);
    Lsearch(a,ele);
    //bsort(a);
    //printf("Element after sorting\n");
    //display(a);
    return 0;
}
void input(int A[])
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
}
void display(int A[])
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}
/*void bsort(int A[])
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}*/
void Lsearch(int A[],int ele)
{
    int flag=-1,i;
    for(i=0;i<size;i++)
    {
        if(ele==A[i])
        {
            flag=i;
            break;
        }
    }
    if(flag==-1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element is present at location =%d .\n",flag+1);
    }
}
