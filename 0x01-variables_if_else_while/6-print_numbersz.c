#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
