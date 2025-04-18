Problem Statement: Write a program to concatenate first,middle and last name function.
Code:
#include<stdio.h>
#include<string.h>
int main()
{
    char fname[50],mname[50],lname[50],fullname[160];
    printf("Enter the first name:");
    scanf("%s",fname);
    printf("\nEnter the middle name:");
    scanf("%s",mname);
    printf("\nEnter the last name:");
    scanf("%s",lname);

    strcpy(fullname,fname);
    strcat(fullname," ");
    strcat(fullname,mname);
    strcat(fullname," ");
    strcat(fullname,lname);

    printf("\nFullname=%s",fullname);
    return 0;
}
