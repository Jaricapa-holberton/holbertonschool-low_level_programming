#include "holberton.h"
/**
 * set_bit - Sets a given bit from an index to 1.
 * @n: The decimal number to be modified.
 * @index: The index of the bit.
 * Return: 1 if successful, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* suposing the maximum 64 bits for unsigned long int */
	/* check if the index go beyond the amount of digits */
	if (index > 63)
	{
		return (-1);
	}
	/* now compare the value of n (a number) with another number */
	/* the another number is un numero que si le sumo 1 bit me da */
	/* el numero deseado surge de corrimentar 1 tanto como el indice */
	/* a ese numero, si lo comparas con | se agrega el 1 y aumenta el */
	/* numero en n */
	/* ex: 11101 *29* | 00010 *2* (1 << 1) = 11111 *31* */
	*n |= (1 << index);
	return (1);
}
