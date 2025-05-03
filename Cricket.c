Program to Display the Details of Player in a Cricket Club.
Code:
#include<stdio.h>
#include<string.h>
struct Cricket
{
    char name[30];
    int age;
    int matches;
    int runs;
    float avg;
}player[200];

int main()
{
    int n,i;
    printf("Enter the number of Players:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the details of player %d",i+1);
        printf("\nEnter the Name of Player:");
        scanf("%s",&player[i].name);
        printf("\nEnter the Age of Player:");
        scanf("%d",&player[i].age);
        printf("\nEnter the number of Matches Played:");
        scanf("%d",&player[i].matches);
        printf("\nEnter the Runs of Player:");
        scanf("%d",&player[i].runs);
        printf("\nEnter the Average of player:");
        scanf("%f",&player[i].avg);
    }
    printf("Details of Players are :");
    printf("\nName\t Age\t No.of Matches\t Runs\t Average");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t %d\t %d\t\t %d\t %f",player[i].name,player[i].age,player[i].matches,player[i].runs,player[i].avg);
    }
    return 0;

}
