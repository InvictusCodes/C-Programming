Program to Print Details of student using Nested Structure:
Code:#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[30];
    float percent;
    struct DOB
    {
        char date[30];
    }dob;
}stud[100];

int main()
{
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the details of Students below:\n");
        printf("Enter the Roll no:");
        scanf("%d",&stud[i].rollno);
        printf("Enter the Name of Student:");
        scanf("%s",&stud[i].name);
        printf("Enter Percentage of student:");
        scanf("%f",&stud[i].percent);
        printf("Enter the Date of Birth of Student:");
        scanf("%s",&stud[i].dob.date);
    }
    printf("\nDetails of Students are as Follows:");
    printf("\nRoll no\t Name\t Percentage\t Date of Birth");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t %s\t %f\t %s",stud[i].rollno,stud[i].name,stud[i].percent,stud[i].dob.date);
    }
    return 0;
}
