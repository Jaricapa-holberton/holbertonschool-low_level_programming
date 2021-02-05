#include<stdio.h>
/**
 * main - function main prints the numbers from 00 to 99
 * n: get a number
 * m: get a number
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48 ; n < 58 ; n++)
	{
		for (m = 48 ; m < 58 ; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 57 && m == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

