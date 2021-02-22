#include "holberton.h"
/**
 * _memset -  fills the first n bytes of
 * the memory area pointed to by s with
 * the constant byte b
 * @s: get a array
 * @b: get a value to fill
 * @n: get a number of times to fill
 * Return: return a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
