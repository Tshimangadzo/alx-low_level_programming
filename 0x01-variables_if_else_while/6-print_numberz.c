#include <stdlib.h>
#include <stdio.h>
/**
 * main - print numbers from 0 to 9
(*
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
