#include "main.h"

/**
* get_bit - return value of given bit.
* @n: number
* @index: index of bit.
*
* Return: the bit to be returned.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
