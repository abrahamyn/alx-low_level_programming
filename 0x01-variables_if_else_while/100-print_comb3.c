#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if (i / 10 % 10 > i % 10) break;

		putchar('0' + (n / 10));
		putchar('0' + (n % 10));

		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar ('\n');
	return (0);
}

