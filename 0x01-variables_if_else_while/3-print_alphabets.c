#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* Return: 0 (success)
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c++);
	}
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');

	return (0);
}
