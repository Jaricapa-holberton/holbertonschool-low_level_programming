#include "holberton.h"
#include <stdio.h>
/**
 * _strcpymod - copies the string pointed to
 * by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 * @dest: get a array
 * @src: get a array
 * Return: return dest
 */
char *_strcpymod(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\n';
	dest = dest + 1;
	/* dest = dest - i; */
	return (dest);
}
/**
 * argstostr - concatenates all the arguments of your proman
 * @ac: get a number
 * @av: get a string
 * Return: return strings
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j;
	int nchar;

	nchar = 0;
	/* contar caracteres por argumento */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			nchar++;
		}
	}
	/* parte que asigna memoria al array */
	arg = malloc(sizeof(char) * (nchar + (ac) + 1));
	/* parte que imprime los argumentos recibidos*/
	int contador;

	if (arg == NULL)
	{
		return (NULL);
	}
	if (ac > 0)
	{
		for (contador = 0; contador < ac; contador++)
		{
			arg = _strcpymod(arg, av[contador]);
		}
		*arg = '\0';
		arg = arg - nchar - ac;
		/* printf("%s,%s\n", arg, av[contador]);  */
	}
	return (arg);
}
