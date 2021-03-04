#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: get a pointer
 * Return: return the string
 */
int _strlen(char *s)
{
	int largo = 0;

	while (*s != '\0')
	{
		largo++;
		s++;


	}
	return (largo);


}

/**
 * string_nconcat - concatenates two strings,
 * but only n bytes of the second string
 * @s1: get a string
 * @s2: get a string
 * @n: get a number
 * Return: return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *lenTotal = NULL;
	unsigned int len1, len2, i, j;

	/*Convert null strings to empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Allocate memory*/
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
	{
		n = len2;
	}
	lenTotal = malloc(sizeof(char) * (len1 + n + 1));

	if (lenTotal == NULL)
	{
		return (NULL);
	}

	/*Concatenate*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		lenTotal[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		lenTotal[i + j] = s2[j];
	}
	lenTotal[i + j] = '\0';

	return (lenTotal);
}
