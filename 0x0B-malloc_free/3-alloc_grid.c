#include "holberton.h"
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: Columns.
 * @height: Rows.
 * Return: Pointer to a 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int L, C;

	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Create a pointer to pointer rows*/
	p = (int **) malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}
	/*For each row create a pointer to each element*/
	for (L = 0; L < height; L++)
	{
		p[L] = (int *)malloc(width * sizeof(int));

		if (p[L] == NULL)
		{
			for (; L >= 0; L--)
			{
				free(p[L]);				
			}
			free(p[L]);
			return (NULL);
		}
	}
	/*Fill the array*/
	for (L = 0; L < height; L++)
	{
		for (C = 0; C < width; C++)
			p[L][C] = 0;
	}
	return (p);
}
