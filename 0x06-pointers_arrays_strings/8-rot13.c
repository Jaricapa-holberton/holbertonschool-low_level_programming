#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: get a string
 * Return: return a string
 */
char *rot13(char *s)
{
	int i, j;
	char c[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char d[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
				break;
			}
		}
	}
	return (s);
}
