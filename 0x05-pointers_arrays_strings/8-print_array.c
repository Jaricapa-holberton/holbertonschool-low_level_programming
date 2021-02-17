#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of
 * an array of integers
 * @a: get a array
 * @n: get a number
 * Return: return void
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", *a);
		a++;
		if (b < n - 1)
		{
			printf(", ");
		}
		b++;
	}
	printf("\n");
}
