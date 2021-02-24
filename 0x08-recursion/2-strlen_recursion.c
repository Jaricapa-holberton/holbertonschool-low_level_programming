#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: get a string
 * Return: return a number
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
