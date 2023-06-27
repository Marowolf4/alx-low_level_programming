#include "main.h"

/**
 * print_rev - check the code
 * @s: kys
 * Return: Always 0.
 */
void print_rev(char *s)
{
	unsigned long int j = strlen(s);

	while (j > 0)
	{
		putchar(s[j - 1]);
		j--;
	}
	putchar('\n');
}
