#include main.h

/**
* print_to_98 - does my stuff
* @n: kys
* Description: Does my stuff explained.
* Return: always 0 always void
*/
void print_to_98(int n)
{
	int i = n;

	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	} else
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	printf("%d\n", 98);
}
