#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
