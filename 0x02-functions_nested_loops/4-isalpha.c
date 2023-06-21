#include "main.h"

/**
* _isalpha - does my stuff
* @c: its mine damnit
* Description: Does my stuff explained.
* Return: always 0 always void
*/

int _isalpha(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else if (c >= 65 && c < 91)
	{
		return (1);
	} 
	else
	{
		return (0);
	}
}
