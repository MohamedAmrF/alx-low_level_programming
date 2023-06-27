#include "main.h"

/**
* _abs - absolute value
* @n: number to return its absolute value
*
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
