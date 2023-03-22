#include "main.h"

/**
 * print_alphabet - check the code
 *
 */
void print_alphabet(void)
{
	char i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
