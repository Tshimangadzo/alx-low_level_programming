#include "main.h"
#include <stdio.h>

/**
 * count - count numbers of chars
 * @s: char argument
 * Return number of letters
 */

int count(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
/**
 *rev_string - prints
 *@s: char argument
 */


void rev_string(char *s)
{
	int i;
	int j = 0;
	int length = (count(s));

	for (i = length - 1; i >= length / 2; i--)
	{
		char first = s[j];

		s[j] = s[i];
		s[i] = first;
		j++;
	}

}


