// bubble sort
#include<stdio.h>
#define size 5           //symbolic constant
void input(int[]);
void display(int []);
void bsort(int []);
int main()
{
    int a[size];
    printf("Element of array::\n");
    input(a);     //input      //function call
    printf("Element before sorting::\n");
    display(a);       //display
    printf("Element after sorting::\n");
    bsort(a);
    display(a);
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
void bsort(int A[])
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
}
