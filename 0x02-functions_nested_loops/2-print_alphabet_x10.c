#include "main.h"
#include "_putchar.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		int a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
