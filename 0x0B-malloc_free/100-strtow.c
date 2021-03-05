#include "holberton.h"
/* */
int contarletras(char *string)
{
	int i;
	
	for (i = 0; (string[i] != '\0' && string[i] != ' '); i++)
	{
	}
	return (i);
}

/**
 * *_strncpy - Copy n bytes from source to destiny string.
 * @dest: Destiny string.
 * @src: Source string.
 * @n: Bytes from src string.
 * Return: Destiny string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
	
}
/* */
char **strtow(char *str)
{
	int i, j, k;
	char ** ptpalabras;
	int palabra = 0;
	int nletras;

	/* contar palabras */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			palabra++;
		}
	}
	/* contar letras de las palabras */
	ptpalabras = malloc(sizeof(char *) * palabra);
	
	k = 0;
	/* identificar palabra*/
	for (j = 0; str[i] != '\0'; j++)
	{
		if (str[i] == ' ' && !(str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			nletras = contarletras(str + i + 1);
			ptpalabras[k] = malloc(sizeof(char) * nletras + 1);
			_strncpy(ptpalabras[k], str + i + 1, nletras);
			i = i + nletras;
			k++;
		}
	}
	return (ptpalabras);
}
