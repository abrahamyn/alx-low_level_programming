#include "main.h"

/**
 * _strchr - a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 *
 * @c: character
 * @s: pointer
 * Retrun: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		break;
	}
	return (s[i] == c? (s + i): '\0');
}
