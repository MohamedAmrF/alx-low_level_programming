#include "main.h"

/**
* int flip_bits - count number of bits needed to be flipped to let n=m
* @n: starting number.
* @m: ending number.
*
* Return: number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, ret = 0;

	for(; i >= 0; i--)
	{
		if(((n>>i)&1) != ((m>>i)&1))
			ret++;
	}
	return (ret);
}
