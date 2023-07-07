#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
*
*
*
*/
int main(int argc, char *argv[])
{
	int cents = 0;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents)
	{
		if (cents >= 25)
		{
			change++;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			change++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			change++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			change++;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			change++;
		}
		else
			break;
	}
	printf("%d\n", change);
	return (0);
}
