#include "main.h"

/**
* checker - helper function
* @n: number is squared and compared against base
* @b: base number to check

* Return: int
*/
int checker(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (checker(n + 1, b));
}
/**
* _sqrt_recursion - return square root of n.
* @n: number to check for square roots.
*
* Return: int
*/
int _sqrt_recursion(int n)
{
		return (checker(1, n));
}
