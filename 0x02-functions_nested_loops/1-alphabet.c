
#include "main.h"
/**
 * main - print a-z in lower case
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
