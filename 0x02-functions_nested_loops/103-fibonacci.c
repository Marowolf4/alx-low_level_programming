#include <stdio.h>
#include <stdlib.h>

/**
* main - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int main(void)
{
	long int sum = 2;
	long int j = 3;
	long int k = 2;
	long int l = 1;

	while (j <= 4000000)
	{
		j = l + k;
		if (j % 2 == 0)
			sum = sum + j;
		l = k;
		k = j;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
