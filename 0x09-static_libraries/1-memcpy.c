#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: get a string
 * @src: get a string
 * @n: get a number
 * Return: return a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		
	}
	return (dest);
	
}
