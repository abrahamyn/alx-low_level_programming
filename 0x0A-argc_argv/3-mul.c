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
int i;
int mul = 0;

if (argc != 3)
{
printf("Error");
return (1);
}
else
{
for (i = 1; i < argc; i++)
mul *= argv[i];
printf("%d\n", i);
return (0);
}
}
