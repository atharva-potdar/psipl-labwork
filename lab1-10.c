#include <stdio.h>

/* Lab 1: 2025-09-29 [HOME]
 * 10. Write a C program to calculate the simple interest (SI = (P * R * T) / 100)
 *     using variables, expressions, and print the result. Accept the input from
 *     the user for P, R and T;
 */


int main(void)
{
    int p, r, t;

    printf("Enter Principal, Rate, and Time: ");
    scanf("%d %d %d", &p, &r, &t);

    printf("Simple Interest = %.2f\n", (1.0 * p * r * t / 100));

    return 0;
}
