#include "main.h"

/**
 *_strncat - appends dest to src
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	if (n > 0)
		dest[i] = '\0';
	return (dest);
}
