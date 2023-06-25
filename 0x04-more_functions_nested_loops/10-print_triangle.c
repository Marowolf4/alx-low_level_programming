#include "main.h"

/**
 * print_triangle - check the code
 * @size: kys
 */
void print_triangle(int size)
{
	int i = 1;
	int j = 1;
	int k = 1;

	while (i <= size)
	{
		j = 1;
		k = size;
		while (j <= size - i)
		{
			putchar(' ');
			j++;
		}
		while (k > size - i)
		{
			putchar('#');
			k--;
		}
		if (i != n)
			putchar('\n');
		i++;
	}
	putchar('\n');
}
