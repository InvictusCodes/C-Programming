Program to Print Details of 10 Book with Title,Author,Price using Array of Structure.
Code:
#include<stdio.h>
#include<string.h>
struct Book
{
    char title[50];
    char author[40];
    float price;
}rec[100];

int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the Details of Books %d\n",i+1);
        printf("Enter the Title of Book:");
        scanf("%s",&rec[i].title);
        printf("Enter the Author of Book:");
        scanf("%s",&rec[i].author);
        printf("Enter the Price of the Book:");
        scanf("%f",&rec[i].price);
    }
    printf("The Records of the book are as follows:");
    printf("\nTitle\t Author\t Price");
    for(i=0;i<10;i++)
    {
        printf("\n%s\t %s\t %f",rec[i].title,rec[i].author,rec[i].price);
    }
    return 0;
}
