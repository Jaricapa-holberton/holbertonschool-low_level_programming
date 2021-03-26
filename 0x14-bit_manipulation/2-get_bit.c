#include "holberton.h"
/**
 * get_bit - Returns the bit of a number given an index.
 * @n: The decimal number to be searched for the bit.
 * @index: The index of the bit.
 * Return: The bit, or -1 if unsuccessful.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* suposing the maximun amount of digits of a number n*/
	/* if the index is not over the digits then fail */
	if (index > 63)
	{
		return (-1);
	}
	/* but, is posible get the bit in a n position using bitwise */
	/* compare the number with a similar number in the n postion */
	/* ex: 1010 (i = 1); use 0010 with & to get 1 */
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
