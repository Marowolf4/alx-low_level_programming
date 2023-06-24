#include "main.h"

/**
 * more_numbers - check the code.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			printf("%d", j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
