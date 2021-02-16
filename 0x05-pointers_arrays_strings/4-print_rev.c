#include "holberton.h"
/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: get a array of strings
 * Return: return void
 */
void print_rev(char *s)
{
	int largo = 0;
	int valor;

	while (*s != '\0')
	{
		largo++;
		s++;
	}
	for (valor = 0; valor <= largo; valor++)
	{
		_putchar(*(s - valor));
	}
	_putchar('\n');
}
