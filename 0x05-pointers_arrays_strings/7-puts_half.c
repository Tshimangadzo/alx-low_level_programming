#include "main.h"

/**
 * puts_half - prints some numbers
 * @str: string
 */

void puts_half(char *str)
{
	int i;
	int j;
	int count = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		count++;
	}
	for (i = (count)/2; str[i] != '\0';)
	{
		
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
