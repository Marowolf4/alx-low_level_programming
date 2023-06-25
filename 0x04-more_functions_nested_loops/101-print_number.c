#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/*
* pow - gonna KILL MYSELF
* Return: braindead
*/
int pow(int b, int e)
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
* main - gonna KILL MYSELF
* Return: braindead
*/
int main()
{
	int n = 5890;
	int i = 0;
	int k = 0;
	int power;

	while (k != 5890)
	{
		i++;
		k = n % pow(10, i);
	}
	while (i > 0)
	{
		putchar((n % pow(10, i))/pow(10, i-1) + '0');
		i--;
	}
	putchar('\n');
}
