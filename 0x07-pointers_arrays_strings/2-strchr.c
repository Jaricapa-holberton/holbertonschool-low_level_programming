#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: get a string
 * @c: get a character
 * Return: return a pointer if the char is founded or Null if not
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = NULL;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return (NULL);
}
