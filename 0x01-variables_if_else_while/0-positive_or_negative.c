#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - check if a random number is positive, negative or zero.
 *
 * Return: 0 on success
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n == 0)
    {
        printf("%d is %s\n", n, "zero");
    }

    if (n > 0)
    {
        printf("%d is %s\n", n, "positive");
    }
    if (n < 0)
    {
        printf("%d is %s\n", n, "negative");
    }

    return (0);
    
}
