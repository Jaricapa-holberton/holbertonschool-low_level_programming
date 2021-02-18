#include  "holberton.h"
/**
 * _strncpy - copies the string pointed to
 * by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 * @dest: get a array
 * @src: get a array
 * @n: get a number
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest = dest - i;
	return (dest);
}
