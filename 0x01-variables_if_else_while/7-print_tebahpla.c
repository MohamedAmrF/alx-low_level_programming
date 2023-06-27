#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	char c;

	c = 'z';
	while (c <= 'a')
	{
		putchar(c++);
	}
	putchar('\n');

	return (0);
}
