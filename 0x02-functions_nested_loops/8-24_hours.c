#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
	{
		int p, o, n, m;

		for (p = 48; p <= 50; p++)
		{
			for (o = 48; o <= 51; o++)
			{
				for (n = 48; n <= 53; n++)
				{
					for (m = 48; m <= 57; m++)
					{
						_putchar(p);
						_putchar(o);
						_putchar(':');
						_putchar(n);
						_putchar(m);
						_putchar('\n');
					}
				}
			}
		}
	}
