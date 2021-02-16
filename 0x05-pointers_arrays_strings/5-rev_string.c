#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: get a array
 * Return: return void
 */
void rev_string(char *s)
{
	int a, b;
	int c = 0;

	for (b = 0; s[b] != 0; b++)
	{
	}
	for (a = 0; a < (b/2); a++)
	{
		c = s[a];
		s[a] = s[b - 1 - a];
		s[b - 1 - a] = c;
	}
	for (a = 0; a < b; a++)
	{
	}
}
