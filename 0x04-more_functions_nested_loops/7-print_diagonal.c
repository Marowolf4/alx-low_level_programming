#include "main.h"

/**
 * print_diagonal - check the code.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			putchar(' ');
			j++;
		}
		putchar('\\');
		i++;
		if (i != n)
			putchar('\n');
	}
	putchar('\n');
}
