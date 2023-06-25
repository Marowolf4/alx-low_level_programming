#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
		putchar('\n');
		i++;
	}
	return (0);
}
