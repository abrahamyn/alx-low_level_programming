#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char n,i;

	for (n = 0; n <= 14; n++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}

