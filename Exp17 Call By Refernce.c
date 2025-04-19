Problem Statement: Write a program to swap numbers using function call by reference(address).
Code:
#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b); // Function declaration

int main()
{
    int a, b;

    // Prompt user to enter two integers
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function and pass the addresses of a and b
    swap(&a, &b);

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// Definition of swap function
// This function takes two integer pointers as arguments
// and swaps the values stored at those memory locations
void swap(int *a, int *b)
{
    int temp;

    // Store the value pointed to by 'a' in temp
    temp = *a;

    // Assign the value pointed to by 'b' to the location pointed to by 'a'
    *a = *b;

    // Assign the value stored in temp to the location pointed to by 'b'
    *b = temp;
}
