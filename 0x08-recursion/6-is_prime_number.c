#include "main.h"


/**
* check - helper
* @n: number
* @i: check divisibility
*
* Return: int
*/
int check(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i <= n)
		return (check(n, i + 2));
}

/**
* is_prime_number - checks primality
* @n: number to be checked
*
* Return: int
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (check(n, 3));
}
