#include "main.h"

/**
 *_strcat - appends dest to src
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
