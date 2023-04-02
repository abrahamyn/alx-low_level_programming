#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */
int main()
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0|| i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
