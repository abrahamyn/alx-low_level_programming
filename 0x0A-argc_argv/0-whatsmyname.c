#include<stdio.h>
#include<stdlib.h>

/**
* main - prints the name of the program
*
<<<<<<< HEAD
* @argc: the number of arguments
* @argv: array of arguments
* Return: Always 0.
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
=======
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0.
*/
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
>>>>>>> acfc07ce914ae0729fcccea6c7a1d986c929e624
	return (0);
}
