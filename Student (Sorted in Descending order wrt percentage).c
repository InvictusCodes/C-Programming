Program to display the Details of 50 Students sorted in descendin order of their percentages.
Code:
#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[30];
    float percent;
}stud[500],temp;

int main()
{
    int i,j;
    
    for(i=0;i<50;i++)
    {
        printf("Enter the details of Students below:\n");
        printf("Enter the Roll no:");
        scanf("%d",&stud[i].rollno);
        printf("Enter the Name of Student:");
        scanf("%s",&stud[i].name);
        printf("Enter Percentage of student:");
        scanf("%f",&stud[i].percent);
    }
    for(i=0;i<50-1;i++)
    {
        for(j=i+1;j<50;j++)
        {
            if(stud[i].percent<stud[j].percent)
            {
                temp=stud[i];
                stud[i]=stud[j];
                stud[j]=temp;
            }
        }
    }
    printf("\nDetails of Students are as Follows:");
    printf("\nRoll no\t Name\t Percentage\t");
    for(i=0;i<3;i++)
    {
        printf("\n%d\t %s\t %f\t ",stud[i].rollno,stud[i].name,stud[i].percent);
    }
    return 0;
}
