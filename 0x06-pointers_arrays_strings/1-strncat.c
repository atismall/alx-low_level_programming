#include "main.h"
#include <stdio.h>
#include <string.h>


/**
*_strncat - return the copying of string with specified number
*@n: The specified integer for the number of character
*@dest: The destination character
*@src: The character that is appended
*
*Return: return a character
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
