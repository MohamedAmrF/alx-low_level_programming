#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	for (int c = '0'; c <= '9'; c++)
	{
		for (int d = c+1; d <= '9'; d++)
		{
			putchar(c);
			putchar(d);
			if (c < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
