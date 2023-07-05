#include "main.h"

/**
 * _strchr - check the code
 * @s: kys
 * @c: kys
 * Return: kys
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int l = 0;
	char h[999];

	while (s[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (i <= j)
	{
		if (s[i] == c)
		{
			while (i <= j)
			{
				h[l] = s[i];
				l++;
				i++;
			}
		}
		i++;
	}
	return (h);
}
