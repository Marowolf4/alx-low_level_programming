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
	i = ceil(i/2.0);
	while (i < j)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
