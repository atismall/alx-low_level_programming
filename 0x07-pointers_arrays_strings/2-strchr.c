#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - This function search for character c in string s
 * @s: The string
 * @c: the character to search for
 *
 * Return: returning string s
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
