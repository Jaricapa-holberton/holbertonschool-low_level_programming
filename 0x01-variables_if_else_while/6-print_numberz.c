#include<stdio.h>
/**
 * main - function main prints all single digit numbers of base 10
 * starting from 0, followed by a new line. But using putchar
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
	}
	putchar('\n');
	return (0);
}
