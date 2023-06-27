#include "main.h"
#include <stdio.h>

/**
* print_array - prints array seperated by commas
* @a: int array
* @n: length of array
*
* Return: void (always)
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", *a)
		a++;
		i++;
	}
	printf("%d\n", *a);
}
