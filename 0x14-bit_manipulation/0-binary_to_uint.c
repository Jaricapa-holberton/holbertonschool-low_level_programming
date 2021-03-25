#include "holberton.h"
/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}
/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, dec_value = 0, base = 1, len;

	/* get the lenght of the string to desplace */
	len = _strlen(b);
	/* iterate on the string looking for 0 and 1*/
	for (i = len - 1; i >= 0; i--)
	{
		/* if a char is not 1 or 0 end the program */
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		/* when find a 1, add to base for the convertion */
		if (b[i] == '1')
		{
			dec_value += base;
		}
		/* power the base amount to convert the number */
		base = base * 2;
	}
	/* display the number */
	return (dec_value);
}
