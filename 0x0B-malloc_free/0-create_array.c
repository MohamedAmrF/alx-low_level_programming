#include "main.h"

/**
* create_array - create new array and fill with c
* @size: size of array
* @c: to be filled with
*
* Return: base address of the array
*/
char *create_array(unsigned int size, char c)
{
	if (!size)
		return (0);
	char *arr = malloc(size);
	int i = 0;

	for (i = 0; i < size; i++)
		arr[i] = c;

	return arr;
}
