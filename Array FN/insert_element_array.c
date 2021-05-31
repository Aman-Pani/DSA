// Incerting element at ith location
#include<stdio.h>
#define size 5
void input(int []);
void display(int []);
int insert(int [], int, int);
int main()
{
    int ele,loc,a[size];
    printf("Enter elements in the array ::\n");
    input(a);
    printf("Array is ::\n");
    display(a);
    printf("Enter the position ::\n");
    scanf("%d",&loc);
    printf("Enter new element ::\n");
    scanf("%d",&ele);
    insert(a, loc, ele);
    printf("New array is ::\n");
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
int insert(int a[], int loc, int ele)
{
    int i,j;
    j=loc;
    for(i=0;i<size;i++)
    {
        if(i==j-1)
        {
            a[i]=ele;
        }
    }
}
