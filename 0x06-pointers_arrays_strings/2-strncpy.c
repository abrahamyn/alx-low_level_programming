#include "main.h"

/**
 * _strncpy - copies from dest to src
 *
 *@dest: pointer
 *@src:pointer
 *@n: integer
 *Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
