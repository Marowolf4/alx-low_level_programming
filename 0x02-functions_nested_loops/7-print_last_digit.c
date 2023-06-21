#include "main.h"

/**
* print_last_digit - does my stuff
* @n: its mine damnit
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int print_last_digit(int n)
{
	int f = abs(n) % 10;

	_putchar(f +'0');
	return(f);
}
