#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: return void
 */
void more_numbers(void)
{
	int L, N, M;

	for (L = '0'; L <= '9'; L++)
	{
		for (M = '0'; M <= '1'; M++)
		{
			for (N = '0'; N <= '9'; N++)
			{
				if ((M != '1') || (N <= '4'))
				{
					if (M != '0')
					{
						_putchar(M);
					}
					_putchar(N);
				}
			}
		}
		_putchar('\n');
	}
}
