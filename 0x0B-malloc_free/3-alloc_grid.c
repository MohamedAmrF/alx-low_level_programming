#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* alloc_grid - allocate memory for a 2d array
* @width: width
* @height: height
*
* Return: pointer to the base address of the first arr
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j = 0;
	int h = height;
	int w = width;

	if (w < 0 || h < 0)
		return (0);

	arr = (int **)malloc(sizeof(int *) * h);
	for (; i < h; i++)
		for (; j < width; j++)
			arr[i] = (int *)malloc(width * sizeof(int));

	return (arr);
}
