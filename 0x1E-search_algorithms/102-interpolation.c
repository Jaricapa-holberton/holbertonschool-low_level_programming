  
#include "search_algos.h"

/**
 * interpolation_search - Search a value in a sorted array of integers
 * using the interpolation search algorithm.
 * @array: A pointer to the first element of the array.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index where value was find or -1 if failure.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = left + (((double)(right - left) / (array[right] - array[left])))
			* (value - array[left]);
		if (mid < size)
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	return (-1);
}
