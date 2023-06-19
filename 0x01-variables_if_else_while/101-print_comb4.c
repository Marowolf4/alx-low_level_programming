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
	int k = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i != j && i != k && j != k)
				{
					if (i * 3 + j * 2 + k < k * 3 + j * 2 + i && i * 3 + j * 2 + k < j * 3 + k * 2 + i && i * 3 + j * 2 + k < j * 3 + i * 2 + k && i * 3 + j * 2 + k < i * 3 + k * 2 + j)
					{
						if (!(i == 48 && j == 49 && k == 50))
						{
							putchar(',');
							putchar(' ');
						}
						putchar(i);
						putchar(j);
						putchar(k);
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
