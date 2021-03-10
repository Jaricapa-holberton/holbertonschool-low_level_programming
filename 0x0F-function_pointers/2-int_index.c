#include "function_pointers.h"
/**
 * int_index - Search for an integer.
 * @array: get a pointer to array.
 * @size: get a number of the array's size.
 * @cmp: get a pointer to function.
 * Return: Return a number as index of searched integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
