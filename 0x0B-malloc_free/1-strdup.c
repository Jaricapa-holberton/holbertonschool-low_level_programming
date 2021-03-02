#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: get a pointer
 * Return: return the string
 */
int _strlen(char *s)
{
	int largo = 0;

	while (*s != '\0')
	{
		largo++;
		s++;
	}
	return (largo);
}
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
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: get a string
 * Return: return a pointer or return NULL if fail
 */
char *_strdup(char *str)
{
	int len;
	char *output;

	len = _strlen(str) + 1;
	output = (char *) malloc((len + 1) * sizeof(char));
	if (output == NULL)
	{
		return (NULL);
	}
	else
	{
		output = (char *) _memcpy(output, str, len);
		return (output);
	}
}
