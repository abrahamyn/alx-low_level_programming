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

	for (n = '0'; n < '10'; n++)
		_putchar(n);
	_putchar('\n');
}
