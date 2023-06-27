#include <stdio.h>
#include <stdlib.h>

/**
* myput - converts two digit int to xx format
* @x: two digit number to be printed.
*
* Return: void
*/
void myput(int x)
{
	if (x < 10)
	{
		putchar('0');
		putchar(x + '0');
	}
	else
	{
		putchar((x / 10) % 100 + '0');
		putchar(x % 10 + '0');
	}
}

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			myput(i);
			putchar(' ');
			myput(j);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
