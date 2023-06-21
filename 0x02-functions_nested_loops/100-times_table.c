#include "main.h"

/**
* print_times_table - does my stuff
* @n: kys
* Description: Does my stuff explained.
* Return: always 0 always void
*/
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 15)
	{
		while (i < n + 1)
		{
			j = 0;
			putchar(j + '0');
			j = 1;
			while (j < n + 1)
			{
				if (i * j < 10)
				{
					printf(",   %d", i * j);
				}
				else if (i * j < 100)
				{
					printf(",  %d", i * j);
				}
				else
				{
					printf(", %d", i * j);
				}
				j++;
			}
			putchar('\n');
			i++;
		}
}
else 
	{
	}
}
