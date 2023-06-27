#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	int c;
	int d;
	int e;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d+1; e <= '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
