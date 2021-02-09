#include "holberton.h"
/**
 * _islower - check for lowercases
 * @c: this variable gets a letter
 * Return: return 1 if c is lowercases and 0 in otherwise
 */
int _islower(int c)
{
	if (c >= 93 && c <= 122)
		return (1);
	else
		return (0);
}
