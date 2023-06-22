#include <stdio.h>
#include <stdlib.h>

/**
* main - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int main(void)
{
	long int i = 0;
	long int j = 3;
	long int k = 2;
	long int l = 1;

	printf("1, 2");
	while (i < 98)
	{
		j = abs(l + k);
		printf(", %d", abs(j));
		l = abs(k);
		k = abs(j);
		k = abs(j);
		i++;
	}
	putchar('\n');
	return (0);
}
