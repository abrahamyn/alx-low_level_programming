#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 *
 * @s: character parameter
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
if (*s != 0)
return (1 + _strlen_recursion(s + 1));
return (0);
}
