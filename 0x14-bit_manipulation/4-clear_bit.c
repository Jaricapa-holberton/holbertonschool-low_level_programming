#include "holberton.h"
/**
 * clear_bit - Sets a given bit from an index to 0.
 * @n: The decimal number to be modified.
 * @index: The index of the bit.
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* supose the maximum 64 bits for unsigned long int */
	/* if the index is beyond the max bits then fail */
	if (index > 63)
	{
		return (-1);
	}
	/* in order to change a bit to 0 is posible use the */
	/* negation of the given number, to get a 0 when compare */
	/* with & */
	/* ex: 1100(14) & 1011(11) = 1000 (8)*/
	/* or... 1100 & ~(1<<2) = 1000 */
	*n &= ~(1 << index);
	return (1);
}
