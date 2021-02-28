#include "holberton.h"
/**
 * _strspn - searches a string for any of a set of bytes
 * @s: get a string
 * @accept: get a string
 * Return: return the number o bytes finded
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
				
			}
			
		}
		
	}
	return (i);
	
}
