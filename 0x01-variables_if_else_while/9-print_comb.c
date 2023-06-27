#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	int c;

	c = '1';
	while (c <= '9')
	{
		putchar(c++);
		if (c <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
