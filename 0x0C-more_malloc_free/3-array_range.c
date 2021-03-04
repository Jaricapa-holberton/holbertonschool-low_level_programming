#include "holberton.h"
/**
 * array_range - creates an array of integers
 * @min: get a number
 * @max: get a number
 * Return: return a pointer or NULL if fails
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;

	if (min > max)
	{
		return (NULL);

	}
	/*Allocate memory*/
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
