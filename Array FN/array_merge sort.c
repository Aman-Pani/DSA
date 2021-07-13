// merge sort
#include <stdio.h>
#define size 5
void input(int[]);
void display(int[]);
void msort(int[], int, int);
void merge(int[], int, int, int);
int main()
{
    int p=0,r=size-1, A[size];
    printf("Enter elements to the array :: \n");
    input(A);
    printf("\nElements are :: \n");
    display(A);
    msort(A,p,r);
    printf("\nElements after sorting :: \n");
    display(A);
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
void msort(int A[], int p, int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        msort(A,p,q);
        msort(A,q+1,r);
        merge(A,p,q,r);
    }
}

void merge(int A[], int p, int q, int r)
{
    int l1, r1, i, B[size];
    i=p;
    l1=p;
    r1=q+1;
    while((l1<=q) && (r1<=r))
    {
        if(A[l1]<=A[r1])
        {
            B[i]=A[l1];
            l1++;
            i++;
        }
        else
        {
            B[i]=A[r1];
            r1++;
            i++;
        }
    }
    while(l1<=q)
    {
        B[i]=A[l1];
        l1++;
        i++;
    }
    while(r1<=r)
    {
        B[i] = A[r1];
        r1++;
        i++;
    }
    for(i=p;i<=r;i++)
    {
        A[i]=B[i];
    }
}
