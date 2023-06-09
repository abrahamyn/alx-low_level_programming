#include "main.h"

/**
 * _memcpy - fills the first n bytes of the memory area pointed to by s
 *
 * @dest: pointer
 * @src: character parameter
 * @n: integer parameter
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
