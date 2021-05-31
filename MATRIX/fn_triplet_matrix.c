//triplet matrix
#include<stdio.h>
#define row 4
#define col 3
void input(int [][col]);
void display(int [][col],int,int);
void find_triplet(int [][col],int [][3]);
int count=0;
int main()
{
    int mat[row][col],triplet[100][3];
    printf("Enter the elements of the matrix :: \n");
    //input for sparse
    input(mat);
    printf("elements of sparse matrix\n");
    display(mat,row,col);
    find_triplet(mat,triplet);
    //printf("elements of triplet\n");
    //display(triplet,count+1,3);
    return 0;
}   //end of main
void input(int m[][col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            //printf("input elements\n");
            scanf("%d",&m[i][j]);
            if(m[i][j]!=0)
            {
                count++;
            }
        }//end of inner loop
    }//end of outerer loop
}//end of function
//define disply
void display(int m[][col],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void find_triplet(int m[][col],int trip[][3])
{
    int i,j,k=1;
    trip[0][0]=row;
    trip[0][1]=col;
    trip[0][2]=count;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(m[i][j]!=0)
            {
                trip[k][0]=i;
                trip[k][1]=j;
                trip[k][2]=m[i][j];
                k++;
            }//end if
        }//end of inner for
    }//end of outer for
    printf("elements of triplet\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",trip[i][j]);
        }
        printf("\n");
    }
}//end of function

