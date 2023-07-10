#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* str_concat - concatenate
* @s1: string 1
* @s2: string 2
*
* Return: base address on new array
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int n;
	char * arr;

	if (!s1 || !s2)
		return (0);

	n = strlen(s1) + strlen(s2) + 1;
	arr = malloc(n);
	if (!arr)
		return (0);

	for (i = 0; i < n; i++)
	{
		if (i < (int)strlen(s1))
			arr[i] = s1[i];
		else
			arr[i] = s2[i - (int)(strlen(s1))];
	}
	printf("\n%ld\n", sizeof(arr));
	printf("%d\n", n);
	return ((char *)arr);
}
