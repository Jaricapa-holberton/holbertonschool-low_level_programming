#include "holberton.h"

/**
 * print_times_table - prints the times table of n * n.
 * @n: the number in which the matrix n * n will be print.
 *
 * Description: prints a matrix of n * n numbers, only from 0 to 15.
 */
void print_times_table(int n)
{
	int fil, col, mul;

	if (n >= 0 && n <= 15)
	{
		for (fil = 0; fil <= n; fil++)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (col = 1; col <= n; col++)
			{
				mul = fil * col;
				_putchar(' ');
				if ((mul / 10) == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if ((mul / 10) > 0 && (mul / 10) < 10)
				{
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if ((mul / 10) >= 10)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul % 100) / 10) + '0');
					_putchar(((mul % 100) % 10) + '0');
				}
				if (col != n)
					_putchar(',');
			}
			_putchar('\n');
			col = 0;
		}
	}
}
