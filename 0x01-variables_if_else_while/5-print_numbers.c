#include<stdio.h>
/**
 * main - function main prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * n: get a number
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n = n + 1;
	}
	printf("\n");
	return (0);
}
