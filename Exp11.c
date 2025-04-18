Problem Statement: Write a program to find value of BIO using function,where BIO is defined as BIO=n!/r!(n-r)!,n and r are natural numbers.
Code:
#include<stdio.h>
int fact(int);
int main()
{
    int r,n;
    float res=0;
    printf("Enter two numbers");
    scanf("%d %d",&n,&r);
    printf("%d",fact(r));
    res=(float)fact(n)/(fact(r)*fact(n-r));
    printf("\nThe Binomial is %f",res);
    return 0;
}
int fact(int a)
{
    int i,f=1;
    for(i=a;i>=1;i--)
    {
        f=f*i;
    }
    return f;
}
