
#include "holberton.h"

/**
 * flip_bits - Counts the number of bits flipped to convert from one number
 *             to the other.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bflipped = 0, nflipped = n ^ m;
	/*
	 * in order to know the number of bits to flip, I've got to know
	 * which not change, and the XOR works for that: it tells me with 0
	 * which bytes are not flipped and with 1 which are.
	 */
	if (n == m)
	{
		return (0);
	}
	/*
	 * in oder to know how many bytes to flip, I shift right the XOR'ed
	 * number 1 bit at a time and check with AND which are 1 and add it to
	 * my result.
	 */
	while (nflipped > 0)
	{
		bflipped = bflipped + (nflipped & 1);
		nflipped >>= 1;
	}
	return (bflipped);
}
