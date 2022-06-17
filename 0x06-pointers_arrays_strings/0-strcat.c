#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strcat - concat strings
*@dest: variable of the destination
*@src: variable of the source
*
*Return: return an int
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

