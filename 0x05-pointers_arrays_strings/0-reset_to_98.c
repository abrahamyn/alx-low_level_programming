#include "main.h"

/**
 * reset_to_98 -  updates the value it points to
 *
 * @n: pointer parameter
 *
 */
void reset_to_98(int *n)
{
	*n = 98;

	_putchar('n');
	_putchar('=');
	_putchar(n + '0');
}
