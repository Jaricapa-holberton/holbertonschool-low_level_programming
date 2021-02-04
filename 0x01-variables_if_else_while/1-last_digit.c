#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function main print the last digit of a number
 * n: get a random number
 * Return: return 0
 */
int main(void)
{
	int n;
	short m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*aplicar modulo para encontrar ultimo digito*/
	m = n % 10;
	/*mostrar ultimo digito*/
	printf("Last digit of %i is %d ", n, m);
	if (m > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (m == 0)
	{
		printf("and is 0\n");
	}
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
