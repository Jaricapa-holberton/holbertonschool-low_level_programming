#include<stdio.h>
/**
 * main - function main prints the lowercase alphabet in reverse
 * n: get a number
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 122;

	while (n > 96)
	{
		putchar(n);
		n = n - 1;
	}
	putchar('\n');
	return (0);
}
