#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: get a number
 * @argv: get a string
 * Return: return 0 if succes or 1 if fail
 */
int main(int argc, char **argv)
{
	int mul;
	char *a, *b;

	(void)argc;
	if (argc == 3)
	{
		a = argv[1];
		b = argv[2];
		mul = atoi(a) * atoi(b);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
