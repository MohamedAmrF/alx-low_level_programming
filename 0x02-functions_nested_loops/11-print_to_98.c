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
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98");
	_putchar('\n');
}
