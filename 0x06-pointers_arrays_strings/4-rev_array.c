#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses an array
 *
 *@a: pointer
 *@n: integer
 */
void reverse_array(int *a, int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
