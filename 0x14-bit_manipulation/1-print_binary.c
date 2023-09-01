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
	int i = 31, flag = 0, temp;

	for (temp = n, i = 0; (temp >>= 1) > 0; i++);
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
			flag |= 1;
		}
		else
		{
			if (flag)
				printf("0");
		}
	}
	if (!flag)
		printf("0");
}
