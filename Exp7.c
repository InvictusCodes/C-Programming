Problem Statement: Write a program to check whether the given number is Armstrong Number or not:
Code:
#include<stdio.h>
int main()
{
    int num,digit,temp,sum=0;
    printf("Enter the number to check whether the number is an Armstrong number or not");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit*digit*digit;
        num=num/10;
    }
    if(temp==sum)
    printf("%d is an Armstrong Number\n",temp);
    else
    printf("%d is not an armstrong number\n ",temp);
    return 0;
}
