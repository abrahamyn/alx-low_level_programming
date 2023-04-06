#include "main.h"

/**
 * _sqrt_recursion - check the code
 *
 * @n: integer parameter
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
int x = n;
  if ((x * x) == n)
    return x;
  else
  {
    x--;
    return _sqrt_recursion(n);
  }
}
