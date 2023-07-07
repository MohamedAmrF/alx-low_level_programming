#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define error (1 << 30)
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
	int sign = 1;

	for (i = 0; i < n; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
			continue;
		}
		if (s[i] < '0' || s[i] > '9')
			return (error);
		ret *= 10;
		ret += s[i] - '0';
	}
	return (ret * sign);
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
	int i = 1;
	int ans = 0;

	for (i = 1; i < argc; i++)
	{
		if (string_to_int(argv[i]) != error)
			ans += string_to_int(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", ans);
	exit(EXIT_SUCCESS);
}
