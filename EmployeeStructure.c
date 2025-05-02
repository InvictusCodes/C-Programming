Structure Program to Accept Employee Id,Name,Salary and display them in sorted arrange ment of name in Alphabetical orders.
Code:
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[20];
    int sal;
} emp[100],temp;

int main() {
    int n,i,j;

    printf("Enter the number of Employees:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter the details of Employee %d:\n", i + 1);

        printf("Employee ID:");
        scanf("%d",&emp[i].id);

        printf("Employee Name:");
        scanf(" %s",&emp[i].name); // To read string with spaces

        printf("Employee Salary:");
        scanf("%d",&emp[i].sal);
    }
    // Sort by name in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\nDetails of Sorted Employees:\n");
    printf("Employee ID\tEmployee Name\tEmployee Salary\n");

    for (i=0;i<n;i++) 
    {
        printf("%-11d\t%-18s\t%d\n",emp[i].id,emp[i].name,emp[i].sal);
    }

    return 0;
}
