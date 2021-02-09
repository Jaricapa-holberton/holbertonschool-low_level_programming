#include "holberton.h"

/**
 * times_table - description
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (c < 10)
			{
				if (b > 0)
					_putchar(' ');
				_putchar('0' + c);

			}
			else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));

			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');

			}

		}

		_putchar('\n');

	}

}
