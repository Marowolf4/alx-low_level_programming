#include "main.h"

/**
* print_alphabet - does my stuff
* @n: its mine damnit
* Description: Does my stuff explained.
* Return: always 0 always void
*/
void print_alphabet(void)
{
	int a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
