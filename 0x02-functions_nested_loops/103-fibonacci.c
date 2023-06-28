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
	long arr[101] = {0};
	long ans = 0;

	arr[0] = 1;
	arr[1] = 2;

	for (i = 2; i <= 100; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] < 4000000)
			ans += arr[i];
		else
			break;
	}
	printf("%ld\n", ans);
	return (0);
}
