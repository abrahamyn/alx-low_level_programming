#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1, j = 2, n, x = 0;

	printf("%d, %d", i, j);
	for (n = 0; n < 48; n++)
	{
		x = i + j;
		i = j;
		j = x;
		printf(", %d", x);
	}
	return (0);
}
