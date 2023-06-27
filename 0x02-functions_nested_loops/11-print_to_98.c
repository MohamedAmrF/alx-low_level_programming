#include "main.h"

/**
* print_to_98 - print number till they reach 98
*@n: number
*
* Return: void (always)
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
			n--;
		else
			n++;
		if (n >= 10)
			_putchar('0' + (n / 10) % 10);
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
