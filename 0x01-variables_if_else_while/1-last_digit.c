#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - entry point
 * description - prints last digit
 * return always 0
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d and is %d greater than 5", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("last digit of %d is %d is less than 6 and not 0", n, ld);
	}
	return (0);
}
