Problem Statement:Write a program to check whether the string is Palindrome or not.
Code:
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20];
    int i,length,flag=0;
    printf("Enter a string:");
    scanf("%s",string1);
    length=strlen(string1);
    for(i=0;i<length;i++){
        if(string1[i]!=string1[length-i-1])
        {
            flag=1;
            break;
        }

    }
    if(flag)
    {
        printf("%s is not a Palindrome.",string1);

    }
    else{
        printf("%s is  a Palindrome.",string1);

    }
    return 0;
}
