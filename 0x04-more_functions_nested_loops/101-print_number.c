#include <stdlib.h>
#include <stdio.h>

/*
* powr - gonna KILL MYSELF
* Return: braindead
*/
int powr(int b, int e)
{
	int i = 0;
	int n = 1;
	while (i < e)
	{
		n = n * b;
		i++;
	}
	return (n);
}
/*
* print_number - gonna KILL MYSELF
* Return: braindead
*/
void print_number(int n)
{
	int i = 0;
	int k = 0;

	while (k != n)
	{
		i++;
		k = n % powr(10, i);
	}
	while (i > 0)
	{
		putchar((n % powr(10, i))/powr(10, i-1) + '0');
		i--;
	}
}
