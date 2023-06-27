#include "main.h"

/**
* print_sign - check sign of number
* @n: number to be checked
*
* Return: 1 (pos), -1 (neg), 0 (zero)
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
