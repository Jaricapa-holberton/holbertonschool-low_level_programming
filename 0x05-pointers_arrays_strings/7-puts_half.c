#include "holberton.h"
/**
 * puts_half - prints half of a
 * string, followed by a new line
 * @str: get a string
 * Return: return void
 */
void puts_half(char *str)
{
	int n, i;

	for (n = 0; str[n] != 0; n++)
		;
	if (n % 2 == 0)
		i = n / 2;
	else
		i = n - ((n - 1) / 2);
	for (; i < n; i++)
		_putchar(str[i]);
	_putchar(10);
}
