#include "main.h"

/**
 * print_line - check the code.
 * @n: kys
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
