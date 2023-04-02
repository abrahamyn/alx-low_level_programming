#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, k, j, a, b;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			for (k = 0; k < 10; k++)
			{
				for (j = 0; j < 10; j++)
				{
					a = (n * 10) + i;
					b = (k * 10) + j;
					if (a <= b - 1)
					{
						putchar('0' + n);
						putchar('0' + i);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + j);
					if (!(n == 9 && i == 8 && k == 9 && j == 9))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
