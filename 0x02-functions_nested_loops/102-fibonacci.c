#include <stdio.h>
#include <stdlib.h>

/**
* main - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int main(void)
{
	int i = 0;
	int j = 3;
	int k = 2;
	int l = 1;

	printf("1, 2");
	while (i < 48)
	{
		j = l + k;
		printf(", %d", j);
		l = k;
		k = j;
		k = j;
		i++;
	}
	putchar('\n');
	return (0);
}
