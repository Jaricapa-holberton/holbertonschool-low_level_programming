#include "holberton.h"

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				{
					return (&s[i]);
				}
			}
		}
	return (NULL);	
}


