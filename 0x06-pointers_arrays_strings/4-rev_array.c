#include "holberton.h"
/**
 * reverse_array - reverses the content
 * of an array of integers
 * @a: get a pointer
 * @n: get a number
 * Return: return balblabva
 */
void reverse_array(int *a, int n)
{
	int *pridir = a;
	int temp;

	a = a + (n - 1); /*posicion */

	while (pridir <= a)
	{
		temp = *pridir; /*guarda primer val*/
		*pridir = *a; /*val pridir remplazado */
		*a = temp; /* dejar val del primer*/
		pridir++;
		a--;
	}
}
