//insertion sort
#include<stdio.h>
#define size 5
void input(int []);
void display(int []);
void isort(int []);
int main()
{
    int a[size];
    printf("Enter element::\n");
    input(a);
    printf("Unsorted array::\n");
    display(a);
    printf("The sorted array ::\n");
    isort(a);
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
void isort(int a[])
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

