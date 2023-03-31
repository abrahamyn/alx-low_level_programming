#include "main.h"

/**
 * leet - changes some characters
 *
 * @s: pointer
 * Return: Always 0.
 */
char *leet(char *s)
{
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {4,4,3,3,0,0,7,7,1,1};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
