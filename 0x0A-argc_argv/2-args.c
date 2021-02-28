#include "holberton.h"
/**
 * main - prints all arguments it receives
 * @argc: get a number of args
 * @argv: get a string of args
 * Return: return 0
 */
int main(int argc, char **argv)
{
	int contador;
	(void)argc;
	if (argc >= 0)
	{
		for (contador = 0; contador < argc; contador++)
		{
			printf("%s\n", argv[contador]);
		}
	}
	return (0);
}
