#include "holberton.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: get a number
 * @c: get a character
 * Return: return a pointer or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(int) * size);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
	free(p);
}
