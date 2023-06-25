#include "main.h"

/**
 * main - check the code
 */
void print_triangle(int size)
{
	int i = 1;
	int j = 1;
	int k = 1;

	while (i <= n)
	{
		j = 1;
		k = n;
		while (j <= n - i)
		{
			putchar(' ');
			j++;
		}
		while (k > n - i)
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
