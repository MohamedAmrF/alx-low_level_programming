#include "main.h"
#include <string.h>

/**
* rev_string - reverse string
* @s: input string
*
* Return: void (always)
*/
void rev_string(char *s)
{
	int n = strlen(s);

	int l = 0;
	int r = n - 1;

	while (l < r)
	{
		int temp = s[l];

		s[l] = s[r];
		s[r] = temp;
		l++;
		r--;
	}
}
