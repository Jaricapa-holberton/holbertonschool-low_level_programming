#include "holberton.h"
/**
 * get_binary - Prints the binary representation of a number.
 * @n: Number to print.
 */
void get_binary(unsigned long int n)
{
	short int bn; /*Binary number (bit)*/

	if (n != 0)
	{
		/*Enter the function by removing the last bit*/
		get_binary(n >> 1);
		bn = n & 1;
		_putchar(bn + '0');
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
	else
	{
		_putchar('0');
	}
}
