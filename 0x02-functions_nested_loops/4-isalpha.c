#include "holberton.h"
/**
 * _isalpha = function that checks for alphabetic character
 * c = get a letter
 * Return: return balblabva
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
