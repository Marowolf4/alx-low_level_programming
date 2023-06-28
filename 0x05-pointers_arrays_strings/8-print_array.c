#include "main.h"

/**
 * print_array - check the code for
 * @a: kys
 * @n: kys
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n > 0)
	{
		printf("%d", a[0]);
		while (i < n)
		{
			printf(", %d", a[i]);
			i++;
		}
		putchar('\n');
	}
	else
		putchar('\n');
}
