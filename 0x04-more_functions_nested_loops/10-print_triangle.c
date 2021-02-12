#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: get a number
 * Return: return void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = (size - a) - 1; b > 0; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
