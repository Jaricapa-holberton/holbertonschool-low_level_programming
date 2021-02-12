#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz.
 * Return: return void
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) != 0))
		{
			printf("Fizz ");
			/* putchar(' '); */
		}
		else if (((n % 3) != 0) && ((n % 5) == 0))
		{
			printf("Buzz ");
			/* putchar(' '); */
		}
		else if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz ");
			/* putchar(' '); */
		}
		else
		{
			printf("%i ", n);
			/* putchar(' '); */
		}
	}
	putchar('\n');
}
