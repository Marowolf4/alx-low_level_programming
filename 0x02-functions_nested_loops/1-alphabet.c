#include "main.h"

/**
* print_alphabet - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
