#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
* is_number - checks if an argument is a number or not
*
* @n: string
* Return: 0 if false and 1 if true.
*/
int is_number(char *n)
{
	int i = 0, c;
	
	if (*n == '-')
		i++;
	for(; *(n + i) != 0; i++)
	{
		c = isdigit(*(n + i));
		if (c == 0)
		{
			return (0);
			break;
		}
	}
	return (1);
}
/**
* main - adds numbers
*
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int i, c;
	int sum = 0;
	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		c = is_number(*(argv + i));
		if ( c == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += *(argv + i);
		}
	}
	printf("%d\n", sum);
	return (0);
}
