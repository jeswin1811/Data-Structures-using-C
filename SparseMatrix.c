/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Sparse Matrix
 *    Date: 2024-08-17
 *
 *    Description: This is a C program to display a sparse matrix (matrix with    
 *    majority elements zero). The first row shows the total number of rows and 
 *    columns and the total number of non-zero values. The remaining rows show 
 *    the particular row and column where a non-zero element is present and its value.		
 ***********************************************************************************/
#include<stdio.h>
void main()
{
    int r,c,i,j,k,a[40][40],b[40][3],nonzero=0;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements at [%d][%d].",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    k=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
            	nonzero++;
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }
    }
    b[0][0]=r;
    b[0][1]=c;
    b[0][2]=nonzero;
    printf("The sparse matrix is:\n");
    printf("ROW\tCOLUMN\tVALUE");
    printf("\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t%d\t%d\t",b[i][0],b[i][1],b[i][2]);
        printf("\n");
    }
}

