#include "holberton.h"
/**
 * get_binary - Prints the binary representation of a number.
 * @n: Number to print.
 */
void get_binary(unsigned long int n)
{
	short int binary; /*get if the number is 1 in binary */

	if (n != 0)
	{
		/* Enter the function by removing the last bit */
		get_binary(n >> 1);
		/* compare if its 1 */
		binary = n & 1;
		/* show the binary */
		_putchar(binary + '0');
	}
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Numbert to print.
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		get_binary(n);
	}
	/* if the binary is not 1, then just print 0 */
	else
	{
		_putchar('0');
	}
}
