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
	char *p = strchr(s, c);

	s = p;
	return (s);
}
