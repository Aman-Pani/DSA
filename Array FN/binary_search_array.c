// binary search
#include<stdio.h>
#define size 10
void input(int []);
void display(int []);
void ssort(int[]);
void Bsearch(int [],int);
int main()
{
    int A[size],ele;
    printf("Enter the elements:\n");
    input(A);
    printf("Array before sorting:\n");
    display(A);
    ssort(A);
    printf("Array after sorting:\n");
    display(A);
    printf("Element to be searched::");
    scanf("%d",&ele);
    Bsearch(A,ele);
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
void ssort(int A[])
{
    int i,j,min,loc;
    for(i=0;i<size;i++)
    {
        min=A[i];
        loc=i;
        for(j=i+1;j<size;j++)
        {
            if(A[j]<min)
            {
                min=A[j];
                loc=j;
            }
        }
        A[loc]=A[i];
        A[i]=min;
    }
}
void Bsearch(int A[],int ele)
{
    int beg,mid,end,pos=-1;
    beg=0;
    end=size-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(A[mid]==ele)
        {
            pos=mid;
            break;
        }
        else if(ele>A[mid])
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(pos==-1)
        {
            printf("The element is absent...");
        }
    else
        {
            printf("The element is present at position %d...",pos+1);
        }
}
//3 7 8 9 4 5 6 0 2 1
