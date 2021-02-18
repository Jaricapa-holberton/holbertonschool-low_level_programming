#include "holberton.h"

/**
 * length - count the array spaces
 * @dest: get a pointer
 * Return: return count
 */

int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}

/**
 * _strcat - concatenates two strings
 * @dest: get a pointer
 * @src: get a pointer
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	char *iterdest;

	iterdest = dest + length(dest);

	while (*src != '\0')
	{
		*iterdest = *src;
		src++;
		iterdest++;
	}
	*iterdest = *src;
	return (dest);
}
