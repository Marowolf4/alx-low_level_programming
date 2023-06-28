#include "main.h"

/**
 * puts_half - check the code
 * @str: kys
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	if (i / 2.0 > i / 2)
		i = i / 2 + 1;
	else i = i / 2;
	while (i < j)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
