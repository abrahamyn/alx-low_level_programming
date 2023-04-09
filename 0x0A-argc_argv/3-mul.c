#include<stdio.h>
#include<stdlib.h>

/**
* main - multiplies two numbers
*
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0.
*/
int main(int argc, char **argv)
{
int i = argv[1] * argv[2];

if (argc != 3)
printf("Error");
else
printf("%d\n", i);
return (0);
}
