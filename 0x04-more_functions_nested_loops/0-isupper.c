#include "main.h"

/**
 * _isupper - check the code.
 * @c: kys
 * Return: Always 0.
 */
int _isupper(char c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	} else
		return (0);
}
