#include<stdio.h>
#include<stdlib.h>

/**
* main - prints the number of arguments passed
*
* @argc: the number of arguments passed
* @argv: array of arguments
* Return: Always 0.
*/
int main(int argc, char **argv)
{
argc = 0;
while (*argv++)
argc++;
printf("%d\n", argc - 1);
return (0);
}
