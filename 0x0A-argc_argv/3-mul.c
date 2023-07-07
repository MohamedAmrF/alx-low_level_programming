#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* string_to_int - string to int
* @s: parameter to be converted
*
* Return: int
*/
int string_to_int(char *s)
{
	int n = strlen(s);
	int ret = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		ret *= 10;
		ret += s[i] - '0';
	}
	return (ret);
}

/**
* main - entry function
* @argc: argument count
* @argv: argument vector
*
* Return: int (0) in case of success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", string_to_int(argv[1]) * string_to_int(argv[2]));
	exit(EXIT_SUCCESS);
}
