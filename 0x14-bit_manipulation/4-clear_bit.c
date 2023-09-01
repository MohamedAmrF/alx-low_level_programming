#include "main.h"

/**
* clear_bit - clear the bit
* @n: number to be set in
* @index: index of the bit to be set.
*
* Return: 1 if success 0 otherwise.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n &= ~(unsigned long int)(1 << index);
	return (1);
}
