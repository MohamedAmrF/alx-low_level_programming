#include "main.h"

/**
* print_last_digit - print last digit
* @n: number
*
* Return: last digit of n
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n *= -1;
	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
