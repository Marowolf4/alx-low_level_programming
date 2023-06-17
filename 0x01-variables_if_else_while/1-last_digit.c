#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it do da thingy
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) {
		int m = abs(n) % 10;
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, m);
	}
	else {
		int m = abs(n) % 10;
		if (m > 5) printf("Last digit of %d is %d and is greater than 5\n", n, m);
		else if (m == 0) printf("Last digit of %d is %d and is 0\n", n, m);
		else if (m < 6) printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
