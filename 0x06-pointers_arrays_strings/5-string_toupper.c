#include "holberton.h"
/**
 * main - function main balblabla
 * @var1: balbla
 * @var2: balblab
 *
 * Return: return balblabva
 */
char *string_toupper(char *s)
{
	int i;
	
	for (i = 0; *s != '\0'; s++)
	{
		if (*s == '\0')
		{
			continue;
		}
		else
		{
			if((*s >= 97) && (*s <= 122))
			{
				s = s - 32;
			}
			else if ((*s >= 65) && (*s <= 90))
			{
				continue;
			}
			else
			{
				continue;
			}
		}
		i++;
	}
	return (s);
}
