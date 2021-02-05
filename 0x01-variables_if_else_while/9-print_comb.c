#include<stdio.h>
/**
 * main - function main prints all possible combinations of
 * single-digit numbers
 * n: get a number
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n = n + 1;
		if (n < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
