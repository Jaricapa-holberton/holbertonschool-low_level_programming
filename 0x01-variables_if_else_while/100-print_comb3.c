#include<stdio.h>
/**
 * main - function main prints all possible different combinations of
 * two digits, but no similars
 * n: get number
 * m: get number
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;
	int x;
	int y;

	n = 48;
	m = 48;
	x = (char)n;
	y = (char)m;

	for (x = 48; x <= 57; x = x + 1)
	{
		for (y = 48; y <= 57; y = y + 1)
		{
			if (x != y)
			{
				if (x < y)
				{
					putchar(x);
					putchar(y);
					if (x == 56 && y == 57)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
