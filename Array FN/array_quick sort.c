//quick sort
#include<stdio.h>
#define size 5
void input(int []);
void display(int []);
void qsort(int [],int,int);
int ppoint(int [],int,int);
void swap(int [],int,int);
int main()
{
    int a[size],p=0,r=size-1;
    printf("Enter element::\n");
    input(a);
    printf("Element of the array::\n");
    display(a);
    printf("The sorted array ::\n");
    qsort(a,p,r);
    display(a);
    return 0;
}
void input(int a[])
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[])
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void qsort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=ppoint(a,p,r);
        qsort(a,p,q-1);
        qsort(a,q+1,r);
    }
}

int ppoint(int a[],int p,int r)
{
    int pivot,i,j,temp;
    pivot=a[r];
    i=p-1;
    j=p;
    while(j<=r-1)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a,i,j);
        }
        j++;
    }
    swap(a,r,i+1);
    return (i+1);
}
void swap(int a[],int x,int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
