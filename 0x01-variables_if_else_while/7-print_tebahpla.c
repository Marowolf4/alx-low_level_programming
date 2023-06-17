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

	int i = 25;

	while (i >= 0)
	{
		putchar(m + i);
		i--;
	}
	putchar('\n');
	return (0);
}
