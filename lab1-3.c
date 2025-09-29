#include <stdio.h>

/* Lab 1: 2025-09-29
 * 3. Write a program to input two integers and perform all arithmetic
 *    operations: addition, subtraction, multiplication, division and
 *    modulus.
 */


int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Add: %d\n", a + b);
    printf("Subtract: %d\n", a - b);
    printf("Multiply: %d\n", a * b);
    printf("Divide: %.2lf\n", 1.0 * a / b);
    printf("Modulus: %d\n", a % b);

    return 0;
}
