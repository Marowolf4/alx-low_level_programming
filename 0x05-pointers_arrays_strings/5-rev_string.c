#include "main.h"

/**
 * rev_string - check the code
 * @s: kys
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char z[999];
	int j = strlen(s);
	int i = 0;

	while (i < j)
	{
		z[i] = s[i];
		i++;
	}
	i = 0;
	while (j > 0)
	{
		s[i] = z[j - 1];
		i++;
		j--;
	}
}
