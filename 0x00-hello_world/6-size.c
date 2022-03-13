#include <stdio.h>
/**
 *  main - Entry point This function just printd words
 *  This function just printd words
 *  Return: Always 0 (Success)
 */
int main(void)
{

	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	return (0);
}
