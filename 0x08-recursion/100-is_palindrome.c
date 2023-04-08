#include "main.h"

/**
* string_length - calculates the length of the string
*
* @a: string pointer
* @n: integer parameter
* Return: the string length.
*/
int string_length(char *a, int n)
{
if (a[n] != '\0')
{
return (string_length(a, n + 1));
}
return (n);
}

/**
* compare_string - compares string vs string reverse
*
* @f: string pointer
* @k: integer parameter
* Return: Always 0.
*/
int compare_string(char *f, int k)
{
if (*f != *(f + k))
return (0);
else if (*f == 0)
return (1);
else
return (compare_string(f + 1, k - 2));
}

/**
* is_palindrome - checks if a string is palindrome
*
* @s: string pointer
* Return: Always 0.
*/
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
else
{
int k = string_length(s, 0);
return (compare_string(s, k));
}
}
