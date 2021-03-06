#include "function_pointers.h"
/**
 * array_iterator - Execute a function given as a parameter on each
 * element of an array.
 * @array: Pointer to array.
 * @size: Array's size.
 * @action: Pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
