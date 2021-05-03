#include "holberton.h"
/**
 * _puts - prints a string, followed
 * by a new line, to stdout
 * @str: get a array of strings
 * Return: return void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
