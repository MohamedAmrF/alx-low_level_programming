#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* free_grid - allocate memory for a 2d array
* @grid: width
* @height: height
*
* Return: pointer to the base address of the first arr
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height < 1)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
