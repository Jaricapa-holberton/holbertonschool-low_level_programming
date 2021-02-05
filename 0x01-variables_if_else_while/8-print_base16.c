#include<stdio.h>
/**
 * main - function main prints all the numbers of base 16 in lowercase
 * n: get a number
 * m: get another number
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;

	n = 48;
	m = 97;

	while (n < 58)
	{
		putchar(n);
		n = n + 1;
	}
	while (m < 103)
	{
		putchar(m);
		m = m + 1;
	}
	putchar('\n');
	return (0);
}
