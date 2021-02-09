#include "holberton.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercase.
 * n: get a number
 * m: get a number
 */
void print_alphabet_x10(void)
{
	char n;
	short m;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
