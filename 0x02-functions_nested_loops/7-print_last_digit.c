#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @n: integer parameter
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
		_putchar(r + '0');
	}
	else
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
	}
	return (r);
}
