#include "main.h"
#include <stdio.h>

/**
* print_binary - prints binary of a number
* @n: number to be converted
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	int i = 31, temp = n, flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = 0; (temp >>= 1) > 0; i++)
		;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			flag ++;
			printf("1");
		}
		else if (flag)
		{
			printf("0");
		}
	}
}
