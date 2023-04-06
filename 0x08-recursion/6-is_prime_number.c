#include "main.h"

/**
* prime - returns 1 if the input integer is a prime number, otherwise return 0
*
* @a: integer parameter
* @b: integer parameter
* Return: Always 0.
*/
int prime(int a, int b)
{
if (a % b == 0)
return (1);
if (b > a)
return (0);
else
return (prime(a, b + 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number
*
* @n: integer parameter
* Return: Always 0.
*/
int is_prime_number(int n)
{
return (prime(n, 2));
}
