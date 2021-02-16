#include "holberton.h"
/**
 * puts_half -  prints half of a 
 * string, followed by a new line
 * @str: get a string
 * Return: return void
 */
void puts_half(char *str)
{
	int b, c;

	for (b = 0; str[b] != 0; b++)
	{
	}
	if ((b % 2) == 0)
	{
		c = b / 2;
		while (c <= b)
		{
			_putchar(*(str + c));
			c++;
		}
		_putchar('\n');
	}
	else
	{
		c = (b - 1) / 2;
		while (c <= b)
		{
			_putchar(*str + c);
			c++;
		}
		_putchar('\n');
	}
}
