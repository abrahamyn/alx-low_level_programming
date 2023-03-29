#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	s[i] = *s;
	return (i + 1);
}
