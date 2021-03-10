#include "3-calc.h"
/**
 * get_op_func - Identify function to use.
 * @s: Charater of operator.
 *
 * Return: A functio.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].ptr != NULL; i++)
	{
		if ()
	}
}

