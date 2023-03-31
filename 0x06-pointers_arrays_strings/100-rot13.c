#include "main.h"

/**
 * rot13 - rotates characters by 13
 *
 * @s: pointer
 * Return: s.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] >= 65 && s[i] <= 78 || s[i] >= 97 && s[i] <= 110)
		{
			s[i] += 13;
			break;
		}
		if (s[i] > 78 && s[i] <= 90 || s[i] > 110 && s[i] <= 122)
			s[i] -= 13;
	}
	return (s);
}
