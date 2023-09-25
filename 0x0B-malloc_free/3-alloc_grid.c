#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - check code
 * Return: int
 * @width: width
 * @height: height
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **arr;

	if (width == 0 || height == 0)
		return (0);
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!arr[i])
			return (NULL);
		for (j = 0 ; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
