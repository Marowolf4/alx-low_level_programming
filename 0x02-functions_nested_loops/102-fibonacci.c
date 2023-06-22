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

	printf("0, 1, 2");
	while (i < 97)
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
