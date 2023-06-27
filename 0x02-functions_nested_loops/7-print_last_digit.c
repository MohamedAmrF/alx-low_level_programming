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

	digit = n % 10;
	if (digit < 0)
		digit *= -1;
	_putchar(digit + '0');
	return (digit);
}
