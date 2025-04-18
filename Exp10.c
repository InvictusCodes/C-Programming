Problem Statement: Write a program for multiplcation of two (M*N) matrices.
Code:
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,i,k,j;
    printf("Enter the number of rows and columns of First Matrix;\n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        printf("Enter elements[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        }
        printf("\n Rows of second matrixis %d\n",n);
        printf("enter Columns for second matrix:\n");
        scanf("%d",&p);
        for(i=0;i<n;i++)
        for(j=0;j<p;j++)
        {
            printf("Enter elements[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\nMatrix A\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix B\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d ",b[i][j]);

            }
            printf("\n");
        }
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=p;j++)
            {
                c[i][j]=0;
                for(k=0;k<=n-1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("\nResultant Matrix\n");
        for(i=0;i<=m-1;i++)
        {
            for(j=0;j<=p-1;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
            return 0;
    }
            
        


    
