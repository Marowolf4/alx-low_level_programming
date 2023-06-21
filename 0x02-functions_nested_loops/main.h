#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void _putchar(char n)
{
	putchar(n);
}

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
