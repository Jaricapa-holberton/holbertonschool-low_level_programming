#include "holberton.h"

/**
 * length - count length of a string
 * @dest: get a string
 * Return: return the count
 */

int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}

/**
 * _strncat - concatenates two strings
 * @dest: get a pointer
 * @src: get a pointer
 * @n: get a number
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	const unsigned int log = length(dest);
	/* char *first = dest; */

	for (i = 0; i < n; i++)
	{
		*(dest + log + i) = *(src + i);
	}
	return (dest);
}
