#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it do da thingy
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m = 'a';

	int i = 0;

	while (i < 26)
	{
		putchar(m + i);
		i++;
	}
	i = 0;
	while (i < 26)
	{
		char m = 'A';

		putchar(m + i);
		if (i == 25)
			putchar('\n');
		i++;
	}
	return (0);
}
