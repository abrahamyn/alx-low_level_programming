#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, max = 0;

	for (n = 2; n <= 7;)
	{
		if (612852475143 % n == 0)
		{
			max = 612852475143 / n;
			break;
		}
		else
			n++;
	}
	printf("%d\n", max);
	return (0);
}
