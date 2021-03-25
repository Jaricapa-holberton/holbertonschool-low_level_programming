#include "holberton.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Numbert to print.
 */
void print_binary(unsigned long int n)
{
	int count = 0, aux = n;
	unsigned int idx;

	while (aux != 0)
	{
		aux /= 10;
		count = count + aux;
	}

	for (idx = 1 << count; idx > 0; idx = idx / 2)
	{
		if (n & idx)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
