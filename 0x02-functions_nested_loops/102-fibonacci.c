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
	long long arr[59] = {0};

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i <= 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%lld, ", arr[i]);
	
	}
	printf("%lld\n", arr[49]);
	return (0);
}
