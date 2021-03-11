#include "3-calc.h"
/**
 * main - Calculate basic operation between two numbers.
 * @argc: get a number of arguments.
 * @argv: get a array of arguments.
 * Return: Return 0 if succes.
 */
int main(ac, **av)
{
	int num1, num2, res;
	char *operator;
	int (*calculation)(int , int);

	/* Usage: calc num1 operator num2 */
	num1 = atoi(av[1]);
	operator = av[2];
	calculation = get_op_func(operator);
	num2 = atoi(av[3]);
	res = calculation(num1, num2);

	printf("%d\n", res);
	return (0);
}
