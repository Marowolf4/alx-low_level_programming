#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10();
{
	int i = 1;

	while (i <= 10)
	{
		int a = 97;
		while (a < 123)
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		i++;
	}
}
