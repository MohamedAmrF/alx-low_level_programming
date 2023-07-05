#include "main.h"

/**
* factorial - asdf
* @n: paramter
*
* Return: factorial of a number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
