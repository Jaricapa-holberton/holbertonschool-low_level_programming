#include "holberton.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: get a number of args
 * @argv: get a string of args
 * Return: return
 */
int main(int argc, char **argv)
{
	int contador;
	(void)**argv;
	contador = argc - 1;
	if (contador > 0)
	{
		printf("%d\n", contador);
	}
	else
	{
		contador = 0;
		printf("%d\n", contador);
	}
	return (0);
}
