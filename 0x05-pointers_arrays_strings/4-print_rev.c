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

	while (*s != '\0')
	{
		largo = largo + 1;
		s++;
	}
	while (largo != 0)
	{
		s--;
		largo--;
		_putchar(*s);
	}
	_putchar('\n');
}
