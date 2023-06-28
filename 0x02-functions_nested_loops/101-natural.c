#include "main.h"
#include <stio.h>

/**
* main - entry function
*
* Return: void (success)
*/
int main(void)
{
	int i = 0;
	int ans = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			ans += i;
	}
	printf("%d\n", ans);
	return (0);
}
