#include <stdlib.h>
#include <stdio.h>

/**
* main - entry function
* @argc: argument count
* @argv: argument vector
*
* Return: int (0) in case of success
*/
int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
