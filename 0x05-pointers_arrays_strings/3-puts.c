#include "main.h"

/**
 * _puts - check the code
 * @str: kys
 * Return: Always 0.
 */
void _puts(char *str)
{
	unsigned long int j = 0;

	while (j < strlen(str))
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
