include "main.h"

/**
* jack_bauer - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/

void jack_bauer(void)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    while (i < 2)
    {
        j = 0;
        while (j < 10)
        {
            k = 0;
            while (k < 6)
            {
                l = 0;
                while (l < 10)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(':');
                    putchar(k + '0');
                    putchar(l + '0');
                    putchar('\n');
                    l++;
                }
                k++;
            }
            j++;
        }
        i++;
    }
    j = 0;
    while (j < 4)
        {
        k = 0;
        while (k < 6)
        {
            l = 0;
            while (l < 10)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(':');
                putchar(k + '0');
                putchar(l + '0');
                putchar('\n');
                l++;
            }
            k++;
        }
        j++;
    }
}
