#include "holberton.h"

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; ; j++)
		{
			if (s[i] != '\0')
			{
				if (s[i] == accept[j])
				{
					return (&s[i]);
				}
			}
			else
			{
				return (NULL);
			}
		}
	}
	return (&s[i]);
}
