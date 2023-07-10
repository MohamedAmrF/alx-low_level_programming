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
	char *arr;
	int size1 = 0;
	int size2 = 0;

	if (s1)
		size1 = strlen(s1);
	if (s2)
		size2 = strlen(s2);

	n = size1 + size2;
	arr = malloc(n);
	if (!arr)
		return (0);

	for (i = 0; i < n; i++)
	{
		if (i < size1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - size1];
	}
	arr[i] = '\0';
	return ((char *)arr);
}
