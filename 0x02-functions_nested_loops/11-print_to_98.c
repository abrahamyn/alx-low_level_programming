#include "main.h"

/**
 * print_to_98 - check the code
 *
 * @n: integer parameter
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (n = 0; n > 99; n++)
	{
		if (n != 98)
			printf("%d, ",n);
		else
			printf("%d",n);
	}
	return (0);
}
