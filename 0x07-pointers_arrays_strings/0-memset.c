#include "main.h"

/**
*_memset - This function sets memor
* @s: The string
* @b: a character
* @n: an integer
*
* Return: return a string
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
