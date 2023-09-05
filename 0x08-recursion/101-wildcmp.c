#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string to be compared with
 * @s2: string to be compared
 *
 * Return: 1 if identical else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (*(s1 + 1) == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
