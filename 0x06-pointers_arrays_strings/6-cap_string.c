#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: get a string
 * Return: return a string
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = " \t\n,;.!?\"(){}";

	i = 0;

	if ((s[i] >= 97) && (s[i] <= 122))
	{
		s[i] = s[i] - 32;
	}
	while (s[i]  != '\0')
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				if ((s[i + 1] >= 97) && (s[i + 1] <= 122))
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
