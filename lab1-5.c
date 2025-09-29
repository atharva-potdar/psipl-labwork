#include <stdio.h>

/* Lab 1: 2025-09-29 [HOME]
 * 5. Write a C program to input marks of three subjects and check 
 *    whether the student has passed (all marks >= 40) using
 *    logical operators (&&, ||, !).
 */


int main(void)
{
    int marks1, marks2, marks3;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40) 
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }
    return 0;
}
