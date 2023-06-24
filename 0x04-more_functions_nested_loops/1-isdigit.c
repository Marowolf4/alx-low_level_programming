#include "main.h"

/**
 * _isdigit - check the code.
 * @c: kys
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > -1 && c < 10)
	{
		return (1);
	}
	else
		return (0);
}
