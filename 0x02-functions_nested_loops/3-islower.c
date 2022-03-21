
#include "main.h"

/**
 * _islower - return 1 if c is lower otherwise return 0
 * Return: 0
 */

int _islower(int c)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			if(c == i){
				return (1);
			}
		}
	}
	return(0);
}
