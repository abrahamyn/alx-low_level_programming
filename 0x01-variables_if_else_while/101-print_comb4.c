#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, k;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			for (k = 0; k < 10; k++)
			{
				if ( i > n && k > i)
				{
					putchar('0' + n);
					putchar('0' + i);
					putchar('0' + k);
					if (!(n == 7 && i == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
