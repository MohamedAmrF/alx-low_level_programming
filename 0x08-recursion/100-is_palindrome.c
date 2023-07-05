#include "main.h"
#include "string.h"

/**
* helper - helper func
* @s: sdlf
* @l: left pointer
* @r: right pointer
*
* Return: int
*/
int helper(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] == s[r])
	{
		return (helper(s, l + 1, r - 1));
	}
	else
		return (0);
}

/**
* is_palindrome - check if palindrome
* @s: input string
*
* Return: 1 if palindrome 0 otherwise
*/
int is_palindrome(char *s)
{
	return (helper(s, 0, strlen(s) - 1));
}
