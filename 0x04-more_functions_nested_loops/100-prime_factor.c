#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/*
* main - check the code
* Return: Always 0.
*/
int main()
{
	__int64 i = 2;
	__int64 n = 612852475143;

	while (n / 2 > i)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
			i++;
	}
	printf("%lld\n", n);
	return (0);
}
