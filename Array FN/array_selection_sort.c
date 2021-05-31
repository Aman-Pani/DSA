//selection sort
#include<stdio.h>
#define size 5
void input(int []);
void display(int []);
void ssort(int []);
int main()
{
    int a[size];
    printf("Enter element::\n");
    input(a);
    printf("Element of the array::\n");
    display(a);
    printf("The sorted array ::\n");
    ssort(a);
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
void ssort(int a[])
{
    int i,j,min,temp;
    for(i=0;i<size;i++)
    {
        min=a[i];
        temp=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                temp=j;
            }
        }
        a[temp]=a[i];
        a[i]=min;
    }
}
