#include "main.h"

/**
* print_sign - does my stuff
* @n: its mine damnit
* Description: Does my stuff explained.
* Return: always 0 always void
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
}
