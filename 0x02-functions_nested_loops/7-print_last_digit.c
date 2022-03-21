
#include "main.h"

/**
 * print_last_digit - checks for reminder
 * @n: character to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n%10 < 0)
	{
		n *=-1;
	}
	return (n%10);
}
