#include "main.h"
/**
 *print_number - print a number using _putchar.
 *@n: the number to be printed.
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / i) >= 10)
			i *= 10;

		while (i > 0)
		{
			_putchar((n / i) + '0');
			n %= i;
			i /= 10;
		}
	}
}
/**
 * print_times_table -prints tables
 *
 * @n: integer parameter
 */
void print_times_table(int n)
{
	int i, j, x = 0;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				x = i * j;
				if (!(j == 0))
				{
					if (x < 10)
					{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
					else if (x >= 10 && x < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
				print_number(x);
				_putchar(44);
			}
			_putchar('\n');
		}
	}
}
