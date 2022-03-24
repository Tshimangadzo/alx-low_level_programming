#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int randomNumber;
	int count = 0;
	int summation = 27772;

	srand(time(NULL));
	while(summation > 122)
	{
		randomNumber = (rand() % 125) + 1;
		printf("%c", randomNumber);
		summation -= randomNumber;
        count++;
	}
	printf("%c", summation);

	return (0);
}
