#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	int i = 0;
	char m = '0';
	while (i < 10) {
		putchar(m+i);
		i++;
	}
	putchar('\n');
	return(0);
}
