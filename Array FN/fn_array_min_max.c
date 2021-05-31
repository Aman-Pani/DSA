//find min. & max. in an array
#include<stdio.h>
#define size 10
void Input(int []);
void Display(int []);
int Find_min(int []);
int Find_max(int []);
int main()
{
    int arr[size],min,max;
    Input(arr);
    Display(arr);
    min=Find_min(arr);
    printf("min=%d\n",min);
    max=Find_max(arr);
    printf("max=%d\n",max);
    return 0;
}
void Input(int A[])
{
    int i;
    printf("Input element to array\n");
    for(i=0;i<size;i++)
    {
        //printf("Input element to array\n");
        scanf("%d",&A[i]);
    }
}
void Display(int A[])
{
    int i;
    printf("Element of array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}
int Find_min(int A[])
{
    int i,min;
    min=A[i];
    for(i=1;i<size;i++)
    {
        if(min>A[i])
        {
            min=A[i];
        }
    }
    return min;
}
int Find_max(int A[])
{
    int i,max;
    max=A[i];
    for(i=1;i<size;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    return max;
}
