#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i > n)
			{
				putchar('0' + n);
				putchar('0' + (i % 10));
				if (!(n == 8 && i == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
