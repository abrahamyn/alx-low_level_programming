#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 2 || n != 4)
			_putchar(n);
	}
	_putchar('\n');
}

