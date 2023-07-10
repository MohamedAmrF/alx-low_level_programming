#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - duplicate string str
* @str: to be duplicated
*
* Return: base address of array
*/
char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int n = strlen(str) + 1;

	if (str == 0)
		return (0);

	arr = malloc(i);

	if (!arr)
		return (arr);

	for (; i < n; i++)
		arr[i] = str[i];

	return ((char *)arr);
}
