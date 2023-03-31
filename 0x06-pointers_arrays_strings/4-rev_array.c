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
	int i = 0, tmp, j = n - 1;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;
	}
}
