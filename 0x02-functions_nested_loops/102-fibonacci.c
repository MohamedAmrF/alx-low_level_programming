#include "main.h"
#include <stdio.h>

/**
* main - entry
*
* Return: void (success)
*/
int main(void)
{
	int i = 2;
	long arr[59] = {0};

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i <= 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", arr[i]);
	}
	printf("%ld\n", arr[49]);
	return (0);
}
