Problem Statement: Write a program to accept N elements of an array and to sort and display them in ascending order using function.
Code:
#include<stdio.h>
int sort( int a[50],int n);
int main()
{
    int a[50],i,n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }
    sort(a,n);
    printf("Array in ascending order is :\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);

    }
    return 0;
}
int sort(int a[10],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
}
