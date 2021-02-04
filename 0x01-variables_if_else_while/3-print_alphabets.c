#include<stdio.h>
/**
 * main - function main prints the alphabet in lowercase, and then in uppercase
 * n : get a caracter
 * m : get a caracter
 * Return: return 0
 */
int main(void)
{
	char n;
	char m;

	n = 97;
	m = 65;

	while (n < 123)
	{
		putchar(n);
		n = n + 1;
	}
	while (m < 91)
	{
		putchar(m);
		m = m + 1;
	}
	putchar('\n');
	return (0);
}
