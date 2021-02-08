#include<stdio.h>
/**
 * main - function main balblabla
 * z: get a number
 * y: get a number
 * x: get a number
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;
	int o;
	int z;
	int y;
	int x;

	n = 48;
	m = 48;
	o = 48;
	z = (char)o;
	y = (char)m;
	x = (char)n;

	for (z = 48; z <= 57; z = z + 1)
	{
		for (x = 48; x <= 57; x = x + 1)
		{
			for (y = 48; y <= 57; y = y + 1)
			{
				if ((z < y) && (y < x) && (z < x))
				{
					putchar(z);
					putchar(y);
					putchar(x);
					if (z != 55 || y != 56 || x != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
