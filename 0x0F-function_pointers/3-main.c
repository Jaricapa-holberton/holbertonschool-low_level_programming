#include "3-calc.h"
/**
 * main - Calculate basic operation between two numbers.
 * @argc: get a number of arguments.
 * @argv: get a array of arguments.
 * Return: Return 0 if succes.
 */
int main(ac, **av)
{
	int a, b, res;
	int (*funsym)(int *);

	/* Usage: calc num1 operator num2 */
	a = atoi(av[1]);
	funsym = get_op_func(av[2]);
	b = atoi(av[3]);
	res = funsym(a, b);

	printf("%d\n", res);
	return (0);
}
