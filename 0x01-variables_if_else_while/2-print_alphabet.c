#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	char m = 'a';
	for (int i = 0; i < 26; i++) {
		putchar(m + i);
		if (i == 25) putchar('\n');
	}
	return(0);
}
