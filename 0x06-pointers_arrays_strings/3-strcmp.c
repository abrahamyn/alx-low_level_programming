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
	int i, j, length1 = 0, length2 = 0, n = 0;

	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (j = 0; s2[j] != '\0'; j++)
		length2++;
	if (length1 > length2)
		n++;
	else if (length1 < length1)
		n--;
	else
		n;
	return (n);
}
