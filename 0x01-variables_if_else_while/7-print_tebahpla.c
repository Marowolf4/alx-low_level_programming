#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	char m = 'a';
	int i = 25;
	while (i >= 0) {
		putchar(m + i);
		i--;
	}
	putchar('\n');
	return(0);
}
