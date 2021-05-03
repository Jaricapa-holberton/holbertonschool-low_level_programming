#include  "holberton.h"
/**
 * _strcpy - copies the string pointed to
 * by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 * @dest: get a array
 * @src: get a array
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
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
	*dest = '\0';
	dest = dest - i;
	return (dest);
	
}
