#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - prints n elements of an array of integers
 * @dest: char element
 * @src: char element
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest,src);
	return (dest);
}
