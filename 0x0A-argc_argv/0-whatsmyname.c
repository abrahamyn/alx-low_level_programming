#include<stdio.h>
#include<stdlib.h>

/**
* main - prints the name of the program
* 
* @argc: the number of arguments
* @argv: array of arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
__attribute__((unused)) argc;
printf("%s", argv[0]);
return (0);
}
