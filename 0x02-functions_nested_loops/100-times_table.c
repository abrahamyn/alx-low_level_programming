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
				_putchar((j * i) + '0');
				if (!(j == n))
				{
					_putchar(44);
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
