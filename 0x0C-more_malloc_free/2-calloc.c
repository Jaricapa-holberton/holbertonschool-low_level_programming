#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: get a number
 * @size: get a number
 * Return: return a pointer or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/*Allocate memory*/
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	/* alloc change the data inside the memory block (pointer) to 0*/
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
