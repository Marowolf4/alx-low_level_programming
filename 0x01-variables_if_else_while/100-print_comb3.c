#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - it do da thingy
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;
	int j = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58) 
		{
			if (i != j) {
				if (i * 2 + j < j * 2 + i) {
					if (i != 0 && j != 0) {
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
