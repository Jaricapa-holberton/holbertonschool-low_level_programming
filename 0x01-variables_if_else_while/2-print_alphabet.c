#include<stdio.h>
/**
 * main - function main print the alphabet in lowercase
 * n is the character
 * Return: return 0
 */
int main(void)
{
	char n;

	n = 97;

	while (n < 123)
	{
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
