#include "main.h"
#include <string.h>


/**
 * _strstr - search for a character in a string
 * @haystack: The string to to be searched for character needle
 * @needle: the character to be searched
 *
 * Return: return a pointer value or null
 */


char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	haystack = strstr(p, needle);

	return (haystack);
}
