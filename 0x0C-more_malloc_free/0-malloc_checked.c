#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: get a number
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
