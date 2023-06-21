#include "main.h"

/**
* times_table - does my stuff
* Description: Does my stuff explained.
* Return: always 0 always void
*/
void times_table(void)
{
    int i = 0;
    int j = 0;

    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            if (i*j < 10)
            {
                if (j < 9)
                    printf("%d,  ", i*j);
                else
                    printf("%d", i*j);
            }
            else
            {
                if (j < 9)
                    printf("%d, ", i*j);
                else
                    printf("%d", i*j);
            }
            j++;
        }
        putchar('\n');
        i++;
    }
}
