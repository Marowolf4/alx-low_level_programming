#include "main.h"

/**
* print_alphabet_x10 - does my stuff
* @n: its mine damnit
* Description: Does my stuff explained.
* Return: always 0 always void
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
