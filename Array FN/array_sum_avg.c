//sum & average of an array
#include<stdio.h>
#define size 5
void input(int[]);
void display(int[]);
int sum(int[]);
float avg(int[]);
int main()
{
    int a[size],s;
    float mean;
    printf("Enter elements:\n");
    input(a);
    printf("Element of array:\n");
    display(a);
    s=sum(a);
    printf("SUM=%d\n",s);
    mean=avg(a);
    printf("AVERAGE=%f\n",mean);
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
int sum(int a[])
{
    int i,j=0;
    for(i=0;i<size;i++)
    {
        j=j+a[i];
    }
    return j;
}
float avg(int a[])
{
    int i,j=0;
    float k;
    for(i=0;i<size;i++)
    {
        j+=a[i];
    }
    k=j/5.0;
    return k;
}
