#include "holberton.h"
/**
 * puts_half - prints half of a
 * string, followed by a new line
 * @str: get a string
 * Return: return void
 */
void puts_half(char *str)
{
	int b, c;

	b = 0;
	while (*str != '\0')
	{
		str++;
		b++;
	}
	c = (b / 2);
	c = b - c;
	while (*(str - c) != '\0')
	{
		_putchar(*(str - c));
		c--;
	}
	_putchar('\n');
}
