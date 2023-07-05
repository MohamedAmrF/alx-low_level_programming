#include "main.h"

/**
* helper - asdf
* @s1: sldkf
* @s2: sldf
* @f: asldf
*
* Return: int
*/
int helper (char *s1, char *s2, int f)
{
	if (*s1 == *s2 && *s1 == '\0')
		return (1);
        if (*s2 == '*')
                return (helper(s1 + 1, s2 + 1, 1);
	if (*s1 == *s2 || f)
		return (helper(s1 + 1, s2 + 1, 0));
	else
		return (0);
}
/**
* wildcmp - compare two strings
* @s1: first string
* @s2: second string
*
* Return: 1 if equal 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == '\0')
		return (1);
	if (*s2 == '*')
		return (helper(s1, s2, 0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
