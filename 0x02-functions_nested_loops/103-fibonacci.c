#include <stdio.h>
#include <stdlib.h>

/**
* main - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int main(void)
{
	long long int i = 0;
	long long int j = 3;
	long long int k = 2;
	long long int l = 1;

	printf("2\n");
	while (j <= 4000000)
	{
		j = l + k;
		if (j % 2 == 0)
		{
			printf("%lld\n", j);
		}
		l = k;
		k = j;
		i++;
	}
	putchar('\n');
	return (0);
}
