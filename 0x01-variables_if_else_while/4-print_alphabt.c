#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	char m = 'a';
	int i = 0;
	while (i < 26) {
		if (i != 16 && i != 4) {
			putchar(m + i);
			if (i == 25) putchar('\n');
		}
		i++;
	}
	return(0);
}
