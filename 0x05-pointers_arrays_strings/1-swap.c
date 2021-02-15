#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: get a number
 * @b: get a number
 * Return: return void
 */
void swap_int(int *a, int *b)
{
        int c;

	c = *b;
	*b = *a;
	*a = c;
}
