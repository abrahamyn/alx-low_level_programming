#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(int n)
{
	int l = 0;
	
	for (n = 0; n < 10; n++)
	{
		if (n != 9)
		{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else
		{
			_putchar(48);
		}
	}
	_putchar('\n');
	for (n = 0; n < 10; n++)
	{
		if (n != 9)
		{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
	for (n = 0; n < 10; n++)
        {
		l = n * 2;
                if (n != 9)
                {
                return (l);
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        return (l);
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 3;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 4;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 5;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 6;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 7;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 8;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
	for (n = 0; n < 10; n++)
        {
                l = n * 9;
                if (n != 9)
                {
                _putchar(l + '0');
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                }
                else
                {
                        _putchar(l + '0');
                }
        }
        _putchar('\n');
}
