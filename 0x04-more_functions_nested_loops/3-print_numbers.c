#include "main.h"
#include <unistd.h>

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
		_putchar(n + '0');
	_putchar('\n');
}
