#include "main.h"
#include <stdlib.h>

/**
* create_array - create new array and fill with c
* @size: size of array
* @c: to be filled with
*
* Return: base address of the array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (!size)
		return (0);

	arr = malloc(size);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return ((char *)arr);
}
