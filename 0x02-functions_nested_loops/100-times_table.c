#include "main.h"
/**
 * print_times_table -prints tables
 *
 * @n: integer parameter
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (i == 0)
					_putchar(i + '0');
				else
				{
					_putchar((j * n) + '0');
				}
				if (!(j == n))
					_putchar(44);
			}
			_putchar('\n');
		}
	}
}
