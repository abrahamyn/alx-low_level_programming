#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i < size)
			_putchar('\n');
	}
	 _putchar('\n');
}
