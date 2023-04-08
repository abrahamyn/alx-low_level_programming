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
return (string_length(*a, n + 1);
}
return (n);
}

/**
* rev_string - checks if a string is palindrome
*
* @b: string pointer
* @r: integer parameter
* @x: integer parameter
* Return: Always 0.
*/
char rev_string(char *b, int r, int x)
{
if(r != x)
{
b[r] = b[x];
return (rev_string(*b, r - 1, x + 1);
}
return (*b);
}

/**
* compare_string - compares string vs string reverse
*
* @f: string pointer
* Return: Always 0.
*/
int compare_string(char *f, char *p)
{
if (*f == *p)
return (1);
else
return 0;
}
/**
* is_palindrome - checks if a string is palindrome
*
* @s: string pointer
* Return: Always 0.
*/
int is_palindrome(char *s)
{
if(*s == 0)
{
return (1);  
}
else
{
return (compare_string(*s, (return (rev_string(*s, return (string_length (*s, 0)), 0)))));  
}
}
