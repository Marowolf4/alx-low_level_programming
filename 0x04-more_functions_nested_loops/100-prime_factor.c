#include <stdlib.h>
#include <stdio.h>

/*
 * main - check the code
 * Return: Always 0.
 */
int main()
{
	long long int i = 2;
	long long int n = 612852475143;

	while (n / 2 > i)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
			i++;
	}
	printf("%d\n", n);
  return (0);
}
