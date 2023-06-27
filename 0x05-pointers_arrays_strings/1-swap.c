#include "main.h"

/**
* swap_int - swaps two integers
* @a: first
* @b: second
*
* Return: void (always)
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
