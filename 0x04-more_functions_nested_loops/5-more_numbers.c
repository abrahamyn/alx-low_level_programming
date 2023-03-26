#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 9) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
