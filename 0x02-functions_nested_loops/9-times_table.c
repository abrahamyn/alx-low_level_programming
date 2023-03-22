#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int n,l;
	
	for (n = 0; n < 10; n++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	for (n = 0; n < 10; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	for (n = 0; n < 10; n++)
	{
		l = n * 2;
		_putchar(l);
		_putchar('\n');
	}
	for (n = 0; n < 10; n++)
        {
                l = n * 3;
                _putchar(l);
                _putchar('\n');
        }
	for (n = 0; n < 10; n++)
        {
                l = n * 4;
                _putchar(l);
                _putchar('\n');
        }
	for (n = 0; n < 10; n++)
        {
                l = n * 5;
                _putchar(l);
                _putchar('\n');
        }
	for (n = 0; n < 10; n++)
        {
                l = n * 6;
                _putchar(l);
                _putchar('\n');
        }
	for (n = 0; n < 10; n++)
        {
                l = n * 7;
                _putchar(l);
                _putchar('\n');
        }
	for (n = 0; n < 10; n++)
	{
                l = n * 8;
                _putchar(l);
                _putchar('\n');
        }
	for (n = 0; n < 10; n++)
        {
                l = n * 9;
                _putchar(l);
                _putchar('\n');
        }
}
