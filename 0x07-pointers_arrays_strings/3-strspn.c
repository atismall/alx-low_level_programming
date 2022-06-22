#include "main.h"
#include "string.h"
#include <stdio.h>


/**
 * _strspn - returns the lenght of a given character in a string
 * @s: string
 * @accept: pointer to a character
 *
 * Return: return integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
