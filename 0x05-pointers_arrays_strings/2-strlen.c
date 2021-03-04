#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: get a pointer
 * Return: return the string
 */
int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}
