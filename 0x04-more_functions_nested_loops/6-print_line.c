#include "main.h"

/**
 * print_line - check the code
 *
 * @n: integer parameter
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i > n; i++)
	{
		if (i <= 0)
		{
			break;
		}
		else
		{
			_putchar(45);
		}
	}
	_putchar(92);
	_putchar('n');
}
