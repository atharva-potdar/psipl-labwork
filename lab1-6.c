#include <stdio.h>

/* Lab 1: 2025-09-29 [HOME]
 * 6. Write a C program that demonstrates compound assignment operators
 *    (i.e. +=, -=, *=, /=, %=) with an integer variable. Consider a
 *    variable 'a' initialised to value 10.
 */


int main(void)
{
    int a = 10;
    printf("Initial value: %d\n", a);

    a += 5;
    printf("After += 5: %d\n", a);

    a -= 3;
    printf("After -= 3: %d\n", a);

    a *= 2;
    printf("After *= 2: %d\n", a);

    a /= 4;
    printf("After /= 4: %d\n", a);

    // NOTE: Important takeaway here, you can't just print % directly.
    // To print a % in printf, use %%.
    a %= 3;
    printf("After %%= 3: %d\n", a);

    return 0;
}
