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
	unsigned int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
			return (&s[i]);

		else if (s[i] == '\0')
			return (0);

	}

}
