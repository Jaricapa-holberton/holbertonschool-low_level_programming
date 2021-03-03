#include "holberton.h"
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers.
 * @width: Columns.
 * @height: Rows.
 * Return: Pointer to a 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int fil, col;
	int **p;

	/* create a pointer to pointer rows */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	/* for each row create a pointer to each element */
	for (fil = 0; fil < height; fil++)
	{
		p[fil] = (int *) malloc(sizeof(int) * width);
		if (p[fil] == NULL)
		{
			for (; col >= 0; col--)
			{
				free(p[fil]);
			}
			free(p);
			return (NULL);
		}
		/* fill the array with zeros */
		for (col = 0; col < width ; col++)
		{
			p[fil][col] = 0;
		}
	}
	return (p);
}
