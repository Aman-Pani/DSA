// Deleting element from ith place //
#include<stdio.h>
#define size 5
void input(int []);
void display(int []);
int del(int [], int);
int main()
{
    int ele,loc,a[size];
    printf("Enter elements ::\n");
    input(a);
    printf("Elements of array ::\n");
    display(a);
    printf("Enter the position ::\n");
    scanf("%d",&loc);
    del(a,loc);
    printf("New array ::\n");
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
int del(int a[], int loc)
{
    int i;
    for(i=loc-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    a[size-1]=0;
}
