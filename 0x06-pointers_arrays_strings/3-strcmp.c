#include "main.h"

/**
 *_strcmp - compares two strings
 *
 *@s1: string 1
 *@s2: string 2
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	for (i = 0; s1[i] != 0 && s2[i] != 0 && n == 0; i++)
	{
		n = s1[i] - s2[i];
	}
	return (n);
}
