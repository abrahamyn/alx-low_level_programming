#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int r = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 10;
	if (r == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	if (r < 6 && r != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	return (0);
}
