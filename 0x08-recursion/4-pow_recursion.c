#include "main.h"

/**
 * _pow_recursion - prints a string in reverse
 *
 * @n: character parameter
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
