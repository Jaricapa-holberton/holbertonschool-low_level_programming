#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: get a array
 * @size: get a number
 * Return: return void
 */
void print_diagsums(int *a, int size)
{
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	for (j = 0; j < size; j++)
	{
		sum1 = sum1 + a[j * (1 + size)];
	}
	sum2 = 0;
	for (j = 1; j <= size; j++)
	{
		sum2 = sum2 + a[(j) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
