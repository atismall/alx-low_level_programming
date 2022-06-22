#include "main.h"
#include <string.h>



/**
 * _strpbrk - locates first occurence in a scene
 * @s: the string
 * @accept: character
 *
 * Return: It return s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ch = s;

	ch = strpbrk(s, accept);
	s = ch;

	return (s);
}
