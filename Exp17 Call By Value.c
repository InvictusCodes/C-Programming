Problem Statement: Write a program for swaping number by function call value.
Code:
#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping the numbers a=%d and b=%d",a,b);
    swap (a,b);
    return 0;
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping the numbers a=%d and b=%d",a,b);
}
