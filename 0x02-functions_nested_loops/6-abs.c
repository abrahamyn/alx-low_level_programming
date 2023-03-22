#include "main.h"

/**
 * _abs - check the code
 *
 * @r: integer parameter
 *
 * Return: Always 0.
 */
int _abs(int r)
{
	int n;

	n = r * -1;
	if (r < 0)
		_putchar(n);
	else
		_putchar(r);
	return (0);
}
