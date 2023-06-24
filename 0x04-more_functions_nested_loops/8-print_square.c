#include "main.h"

/**
 * print_square - check the code
 * @size: kys
 * Return: Always 0.
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
    return (0);
}
