Problem Statement: write a program to find out GCD and Lcm of two given numbers ,using recursive function:
code:
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("The GCD of %d and %d is %d",x,y,gcd(x,y));
    printf("\n The LCM of %d and %d is %d",x,y,lcm(x,y));
    return 0;

}
