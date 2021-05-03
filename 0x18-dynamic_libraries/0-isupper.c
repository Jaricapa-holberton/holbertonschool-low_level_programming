#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: get a caracter
 * Return: return 1 if c is uppercase, return 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
		
	}
	else
	{
		return (0);
		
	}
	
}
