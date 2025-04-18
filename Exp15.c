Problem Statement:Write a program to calculate and display sum of all elements except diagonal matrix using function.
Code:
#include<stdio.h>
int sumd(int n,int mat[10][10]);


int main()
{
    int mat[10][10];
    int n,i,j,sumnd=0;
    printf("Enter the dimension of square matrix");
    scanf("%d",&n);
    printf("Enter the elements of matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("\n mat[%d][%d]",i,j);
            scanf("\n %d",&mat[i][j]);
        }
    }
    printf("Display matrix \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;++j){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    sumnd=sumd(n,mat);
    printf("Sum of the non diagonal elements of a matrix are :%d",sumnd);
    return 0;
}
int sumd(int n,int mat[10][10])
{
int sum=0;
int i,j;
for(i=0;i<n;++i){
    for(j=0;j<n;++j){
        if(i!=j)
        {
            sum+=mat[i][j];
        }
    }

}
return sum;
}
