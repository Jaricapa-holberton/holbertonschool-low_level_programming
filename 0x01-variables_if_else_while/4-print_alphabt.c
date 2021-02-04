#include<stdio.h>
/**
 * main - function main prints the alphabet in lowercase
 * followed by a new line, except the q and e letter
 * n: get a random number
 * Return: return 0
 */
int main(void)
{
	char n;

	n = 97;

	while (n < 123)
	{
		if (n == 113 || n == 101)
		{
			n = n + 1;
		}
		else
		{
			putchar(n);
			n = n + 1;
		}
	}
	putchar('\n');
	return (0);
}

