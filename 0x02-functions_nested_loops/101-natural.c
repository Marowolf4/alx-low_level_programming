#include "main.h"

/**
* main - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
void main()
{
	int i = 1;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d", sum);
}
