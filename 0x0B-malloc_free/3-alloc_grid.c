#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - creates a 2 dimensional array of integers.
  * @width: number of columns.
  * @height: number of rows.
  * Return: returns a pointer to a 2 dimensional array of integers.
  */
int **alloc_grid(int width, int height)
{
	int a, n, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(width * sizeof(int));
		if (matrix[a] == NULL)
		{
			for (n = a - 1; n >= 0; n--)
				free(matrix[n]);
			free(matrix);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			matrix[a][n] = 0;
	}
	return (matrix);
}
